#include <stdio.h>

int main(){

    int idadeM,f1,f2,f3;

    scanf("%d %d %d",&idadeM,&f1,&f2);

    f3 = idadeM - (f1 + f2);
    if((f1 > f2) && (f1 > f3)){

        printf("%d\n",f1);

    }else if ((f1 < f2) && (f2 > f3)){
        printf("%d\n", f2);

    }else
        printf("%d\n",f3);

    return 0;
}
