#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubbleSort(float* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
      
        // Last i elements are already in place, so the loop
        // will only num n - i - 1 times
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

void swap(float* arr, int i, int j) {
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    FILE* file = fopen("filename.txt", "r");
    char line[256];
    int size = 0;
    float* numbs = (float*) malloc(size * sizeof(float));

    if (file == NULL) {
        printf("UNABLE TO OPEN FILE");
        return 1;
    }

    while(fgets(line, sizeof(line), file)) {
        size += 1;
        numbs = realloc(numbs, (size_t)size * sizeof(float));

        if (!numbs) { 
            printf("Memory Re-allocation failed."); 
            numbs = NULL; 
        } 

        numbs[size-1] = atof(line);
    }

    for(int i=0; i < size; i++){
        printf(" %i BAJO JAJO: %f \n", i, numbs[i]);
    }

    bubbleSort(numbs, size);

    for(int i=0; i < size; i++){
        printf(" %i BAJO JAJO: %f \n", i, numbs[i]);
    }
    fclose(file);
    free(numbs);

    return 0;
}
