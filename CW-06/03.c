#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pprostokat(float a, float b);
float pkola(float r);
float ptrojkat(float a, float h);

int main()
{
    char wybor = "";
    char kont = "";
    int dalej = 1;


    while (dalej == 1)
    {
        printf("Czego pole chcesz policzyc? [P]rostokat [K]olo [T]rojkat :");
        scanf(" %c", &wybor);

        if (wybor == 'P')
        {
            float a, b;
            printf("\nPODAJ A: ");
            scanf(" %f", &a);
            printf("\nPODAJ B: ");
            scanf(" %f", &b);

            printf("\n POLE: %f \n", pprostokat(a,b));
        }

        if (wybor == 'K')
        {
            float r;
            printf("\nPODAJ R: ");
            scanf(" %f", &r);

            printf("\n POLE: %f \n", pkola(r));
        }

        if (wybor == 'T')
        {
            float a, h;
            printf("\nPODAJ A: ");
            scanf(" %f", &a);
            printf("\nPODAJ H: ");
            scanf(" %f", &h);

            printf("\n POLE: %f \n", ptrojkat(a,h));
        }
        printf("Czy chcesz kontynuowac? T/N : ");
        scanf(" %c", &kont);

        if (kont == 'N')
        {
            dalej = 0;
            break;
        }
        
    }

    return 0;
}

float pprostokat(float a, float b)
{
    return a * b;
}

float pkola(float r)
{
    const float pi = 3.14159;
    return pi * r * r;
}
float ptrojkat(float a, float h)
{
    return 0.5 * a * h;
}