#include <stdio.h>

int main()
{

    int n,c[1001],m[1001],maior,i,t;
    t=1;


    while(scanf("%d",&n) == 1 && n >0)
    {
        maior = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&c[i],&m[i]);

            if(m[i] > maior)
            {
                maior = m[i];
            }
        }

        printf("Turma %d\n",t++);

        for(i=0; i<n; i++)
        {
            if(m[i] == maior)
            {
                printf("%d ",c[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}


