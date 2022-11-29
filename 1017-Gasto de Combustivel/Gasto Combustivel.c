#include <stdio.h>

int main()
{

    int valor,cedulas,cem,cinquenta,vinte,dez,cinco,dois;

    scanf("%d",&valor);

    cedulas = valor;

    cem = cedulas / 100;

    cedulas = cedulas - (cem * 100);

    cinquenta = cedulas / 50;

    cedulas = cedulas - (cinquenta * 50);

    vinte = cedulas / 20;

    cedulas = cedulas -(vinte * 20);

    dez = cedulas / 10;

    cedulas = cedulas - (dez * 10);

    cinco = cedulas /5;

    cedulas = cedulas - (cinco * 5);

    dois = cedulas / 2;

    cedulas = cedulas - (dois * 2);


    printf("%d\n",valor);
    printf("%d notas(s) de R$ 100,00\n",cem);
    printf("%d notas(s) de R$ 50,00\n",cinquenta);
    printf("%d notas(s) de R$ 20,00\n",vinte);
    printf("%d notas(s) de R$ 10,00\n",dez);
    printf("%d notas(s) de R$ 5,00\n",cinco);
    printf("%d notas(s) de R$ 2,00\n",dois);
    printf("%d notas(s) de R$ 1,00\n",cedulas);

    return 0;
}
