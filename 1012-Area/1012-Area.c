#include <stdio.h>
#include <stdlib.h>

int main(){

    double A,B,C,n,triretangulo,circulo,trapezio,quadrado,retangulo;

    n = 3.14159;

    scanf("%lf %lf %lf",&A,&B,&C);

    triretangulo = (A * C) / 2;
    circulo = n * (C * C);
    trapezio = (A + B) * C / 2;
    quadrado = B * B;
    retangulo = A * B;



    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",triretangulo,circulo,trapezio,quadrado,retangulo);

    return 0;
}
