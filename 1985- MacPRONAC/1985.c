#include <stdio.h>

int main()
{
    int n,i,produto1,qtd1;
    double soma1 = 0,valor = 0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&produto1,&qtd1);

        switch(produto1)
        {
        case 1001:
            soma1 = soma1 + 1.50 * qtd1;
            break;

        case 1002:
            soma1 = soma1 + 2.50 * qtd1;
            break;
        case 1003:
            soma1 = soma1 + 3.50 * qtd1;
            break;
        case 1004:
            soma1 = soma1 + 4.50 * qtd1;
            break;
        case 1005:
            soma1 = soma1 + 5.50 * qtd1;
            break;
        }
    }
    printf("%.2lf\n",soma1 );

    return 0;
}
