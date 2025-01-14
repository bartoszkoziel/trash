#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suma(float* nums, int size);
float sr_arytm(float* numbs, int size);
float sr_geom(float* numbs, int size);

int main(){
    FILE* file = fopen("filename.txt", "r");
    char line[256];
    int size = 1;
    float* numbs = (float*) malloc(size * sizeof(float));

    if (file == NULL) {
        printf("UNABLE TO OPEN FILE");
        return 1;
    }

    while(fgets(line, sizeof(line), file)) {
        numbs = realloc(numbs, (size_t)size * sizeof(float));

        if (!numbs) { 
            printf("Memory Re-allocation failed."); 
            numbs = NULL; 
        } 

        numbs[size-1] = atof(line);
        size += 1;
    }

    fclose(file);

    printf("SUMA: %f \n", suma(numbs, size));
    printf("SR ARYT: %f \n", sr_arytm(numbs, size));
    printf("SR GEOM: %f \n", sr_geom(numbs, size));

    free(numbs);

    return 0;
}

float suma(float* numbs, int size) {
    float ans = 0;

    for(int i=0; i < size - 1; i++){
        // printf("PETLA %f \n", numbs[i]);
        ans += numbs[i];
    }

    return ans;
}

float sr_arytm(float* numbs, int size) {
    return (suma(numbs, size) / (size - 1));
}

float sr_geom(float* numbs, int size) {
    float ans = numbs[0];
    for(int i=1; i < size - 1; i++){
        // printf("HERE CO ROBIE :: ANS=%f  NUMBS[i]=%f \n", ans, numbs[i]);
        ans = ans * numbs[i];
    }

    // printf("ans :: %f \n", ans);
    // printf("exp :: %f \n", 1.0 / (size - 1));

    float exp = 1.0/(size - 1);
    return pow(ans, exp);
}