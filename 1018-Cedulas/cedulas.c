#include <stdio.h>
#include <math.h>


int main()
{

    int numero,cedulas,cem,cinquenta,vinte,dez,cinco,dois,um;



    scanf("%d",&numero);

    cedulas = numero;

    cem = numero / 100;

    cedulas = cedulas % 100;

    cinquenta = cedulas / 50;

    cedulas = cedulas % 50;

    vinte = cedulas / 20;

    cedulas = cedulas % 20;

    dez = cedulas / 10;

    cedulas = cedulas % 10;

    cinco = cedulas / 5;

    cedulas = cedulas % 5;

    dois = cedulas / 2;

    cedulas = cedulas % 2;

    um = cedulas / 1;

    cedulas = cedulas % 1;


    printf("%d\n",numero);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",cedulas);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);


    return 0;
}
