#include <stdio.h>

int main()
{
    int n[5],i,pares = 0,impares = 0,pos = 0,neg = 0;

    for(i=0; i<5; i++)
    {

        scanf("%d",&n[i]);

        if(n[i] % 2 == 0)
        {
            pares++;
        }
        else if(n[i] % 2 != 0)
        {
            impares++;
        }
        if(n[i] > 0){
            pos++;
        }
        if(n[i] < 0){
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
