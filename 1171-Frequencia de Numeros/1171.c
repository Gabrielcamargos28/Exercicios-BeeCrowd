#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont[2001],x,j,n,l,i,z;

    for(z=0; z<=2000; z++)
    {
        cont[z] = 0;
    }
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        cont[x]++;
    }
    for(i=0; i<=2000; i++)
    {
        if(cont[i] > 0){
            printf("%d aparece %d vez(es)\n",i,cont[i]);

        }
    }

    return 0;
}


