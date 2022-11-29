#include <stdio.h>

int main(){
    int c,p,f,folhasN;


    scanf("%d %d %d",&c,&p,&f);

    folhasN= c * f;

    if(folhasN <= p){
        printf("S\n");
    }else if ( folhasN > p)
        printf("N\n");
        return 0;
}




