#include <stdio.h>

int main()
{
    int a,b,c,n1,n2,n3;

    n1 = a;
    n2 = b;
    n3 = c;

    scanf("%d %d %d",&a,&b,&c);

    if((a < n1) && (a < n2) && (a < n3)){
            n1 = a;
            printf("%d",n1);
    }
    if((b < n1) && (b < n2) && (b < n3)){
            n1 = b;
            printf("%d",n1);
    }
    if((c < n1) && (c < n2) && (c < n3)){
            n1 = c;
            printf("%d",n1);
    }
    if((a < n1) && (a < n2) && (a < n3)){
            n2 = a;
            printf("%d",n2);
    }
    if((b < n1) && (b < n2) && (b < n3)){
            n2 = b;
            printf("%d",n2);
    }
    if((c < n1) && (c < n2) && (c < n3)){
            n2 = c;
            printf("%d",n2);
    }
    if((a < n1) && (a < n2) && (a < n3)){
            n3 = a;
            printf("%d",n3);
    }
    if((b < n1) && (b < n2) && (b < n3)){
            n3 = b;
            printf("%d",n3);
    }
    if((c < n1) && (c < n2) && (c < n3)){
            n3 = c;
            printf("%d",n3);
    }
    return 0;
}
