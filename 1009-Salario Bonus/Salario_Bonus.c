#include <stdio.h>

int main(){

    int pc1,np1,pc2,np2;
    double vlr1,vlr2,VlrTotal,total1,total2;

    scanf("%d %d %lf",&pc1,&np1,&vlr1);
    scanf("%d %d %lf",&pc2,&np2,&vlr2);

    total1 = np1 * vlr1;
    total2 = np2 * vlr2;
    VlrTotal = total1 + total2;

    printf("VALOR  A PAGAR: R$ %.2lf\n",VlrTotal);

}
