#include <stdio.h>
#include <math.h>
int main()
{

    int n,cinq =0,t=1,dez=0,cinco=0,um=0;

    scanf("%d",&n);

    do
    {

        cinq = n / 50;
        n = n % 50;

        dez = n / 10;
        n = n % 10;

        cinco = n / 5;
        n = n % 5;

        um = n / 1;
        n = n % 1;


        printf("Teste %d\n",t);
        t++;
        printf("%d %d %d %d\n",cinq,dez,cinco,um);
        printf("\n");
        scanf("%d",&n);

    }
    while(n != 0);
    return 0;
}
