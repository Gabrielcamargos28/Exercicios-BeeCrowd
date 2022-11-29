#include <stdio.h>
#include <math.h>


int main()
{
    int A,B,C,D,somaCD,somaAB,maior;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    maior = A;

    somaCD = C + D;

    somaAB = A + B;



    if ((B>C) && (D>A) && (somaCD>somaAB) && (C>0 && D>0) && (A % 2 == 0)){

        printf("Valores aceitos\n");
    }else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;

}
