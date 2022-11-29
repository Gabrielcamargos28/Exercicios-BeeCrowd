#include <stdio.h>

int main()
{

    int conversao,idadeD, anos,meses,dias;

    scanf("%d",&idadeD);

    conversao = idadeD;

    anos = idadeD / 365;

    conversao = idadeD % 365;


    printf("%d ano(s)",anos);

    return 0;
}
