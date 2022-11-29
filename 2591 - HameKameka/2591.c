#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,n,j,k;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",str);
        printf("k");
        int contA=0,conta=0;
        for(j=1; str[j]=='a'; j++)
        {
            contA++;
        }
        j = j + 3;
        for(j; str[j]=='a'; j++)
        {
            conta++;
        }
        int calculo = contA * conta;
        for(k=0; k<calculo; k++)
        {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}
