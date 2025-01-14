#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float oblicz(float a, float b, char operator);

int main()
{
    float a, b;
    char operator= "";

    printf("PODAJ LICZBE A: ");
    scanf(" %f", &a);

    printf("PODAJ LICZBE B: ");
    scanf(" %f", &b);

    printf("PODAJ OPERATOR [ + - x / ] ");
    scanf(" %c", &operator);

    //printf("A: %f | B: %f  \n", a, b);
    //printf("OPERATOR: %c \n", operator);
    printf("WYNIK: %f \n", oblicz(a,b,operator));
    return 0;
}

float oblicz(float a, float b, char operator) {
    if (operator == '+'){
        return a+b;
    }
    if (operator == '-'){
        return a-b;
    }
    if (operator == 'x'){
        return a*b;
    }
    if(operator == '/'){
        return a/b;
    }
    else{
        printf("ZLY OPERATOR!\n");
        return -1.0;
    }
}
