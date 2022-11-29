#include <stdio.h>

int main()
{

    int n1,n2,n3,n4,n5,pares = 0;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    if(n1 % 2 == 0){
        pares++;
    }
    if(n2 % 2 == 0){
        pares++;
    }
    if(n3 % 2 == 0){
        pares++;
    }
    if(n4 % 2 == 0){
        pares++;
    }
    if(n5 % 2 == 0){
        pares++;
    }
    printf("%d valores pares\n",pares);


    return 0;
}
