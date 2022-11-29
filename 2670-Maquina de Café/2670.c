#include <stdio.h>

int main()
{
    int a,b,carta;

    while(a < 1 || a > 13 && b < 1 || b > 13)
    {
        scanf("%d %d", &a, &b);
    }
    if (a == b){
        printf("%d\n",a);
    }
    if(a < b){
        printf("%d\n",b);
    }
    if(a>b){
        printf("%d\n",a);
    }

    return 0;
}
