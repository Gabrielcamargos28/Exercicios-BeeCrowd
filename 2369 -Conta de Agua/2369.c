#include <stdio.h>

int main()
{
    int n,c,i;

    scanf("%d",&n);
    if(n<=10)
    {

        c = 7;
    }
    else if(n<=30)
    {
        c = 7 +(n -10) * 1;
    }
    else if(n<= 100)
    {

        c = 7 + 20 + (n -30) * 2;
    }
    else
    {
        c = 7 + 20 + 140 + (n - 100) *5;
    }
    printf("%d\n",c);

    return 0;
}
