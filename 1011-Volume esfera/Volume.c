#include <stdio.h>

int main(){

    double pi, r, esfera;

    pi = 3.14159;
    scanf("%lf",&r);
    esfera = ((4.0/3) * pi * (r * r * r));

    printf("VOLUME = %.3lf",esfera);

    return 0;

}
