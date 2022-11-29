#include <stdio.h>

int main()
{
    int n,somaN = 0,i = 0;
    double media;
    do
    {
        scanf("%d",&n);

        if(n>=0)
        {
            somaN = somaN + n;
            i++;
        }
    }
    while(n>=0);

    media = (double)somaN / i;

    printf("%.2lf\n",media);

    return 0;
}

