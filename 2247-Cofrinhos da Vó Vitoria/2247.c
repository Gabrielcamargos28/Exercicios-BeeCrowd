#include <stdio.h>

int main()
{

    int n,J,Z,dif = 0,i,T = 1;

    do{
    scanf("%d",&n);
    if(n == 0){
        break;
    }
    printf("Teste %d\n",T);
    T++;
    dif = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&J,&Z);
        dif = dif + J - Z;
        printf("%d\n",dif);
    }
    printf("\n");
    }while(n != 0);

}
