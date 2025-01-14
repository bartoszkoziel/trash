#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt
{
    float x;
    float y;
};

struct Okrag
{
    float x;
    float y;
    float r;
};

void czy_w_srodku(struct Punkt p1, struct Okrag o1);

int main()
{
    struct Punkt pkt1 = {0, 0};
    struct Okrag okr1 = {1, 0, 1};

    czy_w_srodku(pkt1, okr1);

    return 0;
}

void czy_w_srodku(struct Punkt p1, struct Okrag o1){
    printf("P1: %f %f \n", p1.x, p1.y);
    printf("O1: %f %f  %f \n", o1.x, o1.y, o1.r);

    float x2 = pow(o1.x - p1.x, 2) ;
    float y2 = pow(o1.y - p1.y, 2) ;
    float odl = powf(x2 + y2, 1.0/2.0);

    if (odl > o1.r) {
        printf("PUNKT POZA OKREGIEM \n");
    } else if (odl == o1.r) {
        printf("PUNKT NA OKREGU \n");
    } else if (odl < o1.r) {
        printf("PUNKT W OKREGU \n");
    } else {
        printf("COS POSZLO NIE TAK \n");
    }
}