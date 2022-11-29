#include <stdio.h>

int main(){

    int p1,c1,p2,c2,soma1,soma2;

    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
    soma1 = p1 * c1;
    soma2 = p2 * c2;

    if(soma1 == soma2){
        printf("0\n");

    }else if(soma1 > soma2){
        printf("-1\n");
    }else if(soma1 < soma2){
        printf("1\n");
    }
    return 0;

}
