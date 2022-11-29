
#include <stdio.h>

int main(){

    int i,j,coluna;
    char v;
    double m[12][12],soma=0;

    scanf("%d",&coluna);

    scanf(" %c",&v);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        if(i==coluna){
            soma+=m[i][j];
        }

        }

    }
    if(v =='S'){
        printf("%.1lf\n",soma);
    }else if(v =='M'){
        printf("%.1lf\n",soma/12);
    }

    return 0;

}
