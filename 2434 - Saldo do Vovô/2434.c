#include <stdio.h>


int main()
{

    int n,movimento=0,movimentoDia=0,i,menor=0,saldoI=0;

    scanf("%d %d",&n,&saldoI);
    menor = saldoI;
    movimentoDia = saldoI;
    for(i=0; i<n; i++)
    {
        scanf("%d",&movimento);

        movimentoDia += movimento;

        if(movimentoDia < menor){
            menor = movimentoDia;
        }
    }

    printf("%d\n",menor);
    return 0;
}
