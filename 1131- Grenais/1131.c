#include <stdio.h>

int main()
{
    int grenais=0,e,gG,gI,vG=0,vI=0,n;


    do
    {

        scanf("%d %d",&gI,&gG);
        grenais++;
        if(gI > gG)
        {
            vI++;
        }
        else if( gI < gG)
        {
            vG++;
        }
        else if(gI == gG)
        {
            e++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d",&n);

    }
    while(n != 2);

    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",vI);
    printf("Gremio:%d\n",vG);
    printf("Empates:%d\n",e);

    if(vI > vG)
    {
        printf("Inter venceu mais\n");
    }
    else if(vI < {
        printf("Gremio venceu mais\n");
    }
    if(vI == vG)
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
