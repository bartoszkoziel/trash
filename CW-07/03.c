#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt
{
    float x;
    float y;
};

float odleglosc(struct Punkt p1, struct Punkt p2);

int main()
{
    struct Punkt pkt1 = {0, 0};
    struct Punkt pkt2 = {1, 1};

    printf("ODL : %f \n", odleglosc(pkt1, pkt2));

    return 0;
}

float odleglosc(struct Punkt p1, struct Punkt p2){
    // printf("P1: %f %f \n", p1.x, p1.y);
    float x2 = pow(p2.x - p1.x, 2) ;
    float y2 = pow(p2.y - p1.y, 2) ;
    return powf(x2 + y2, 1.0/2.0);
}