#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int num = rand() % 2001;
    printf("RAND: %i \n", num);

    int max=2000;
    int min=0;
    int guess;
    char ans = "";
    while(1==1){
        guess = round(max + min) / 2;

        printf("CZY TWOJA LICZBA TO %i ? [T] / [N] \n", guess);
        scanf(" %c", &ans);

        if(ans == 'T'){
            printf("LICZBA TO: %i \n", guess);
            break;
        }

        printf("CZY TWOJA LICZBA JEST WIEKSZA? [T] / [N]");
        scanf(" %c", &ans);

        if(ans == 'T'){
            min = guess;
            continue;
        }
        max = guess;

    }

    return 0;
}
//1145