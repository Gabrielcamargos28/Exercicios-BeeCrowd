#include <stdio.h>

long long int fatorial(int n)
{
    long long int fat;
    for(fat = 1; n > 1; n--)
    {
        fat = fat * n;
    }
    return fat;
}
int main()
{
    int M,N;

    while(scanf("%d %d", &M,&N) != EOF)
    {
        long long int fat1 = fatorial(M);
        long long int fat2 = fatorial(N);
        long long int soma = fat1 + fat2;
        printf("%lld\n",soma);
    }
    return 0;
}
