#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,contA=0;
    char str[100];

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        printf("k");
        for(j=0;str[j] == 'a';j++){
            contA++;
        }
        for(int k=0;k<contA;k++){
            printf("%s",contA);
        }

    }


    return 0;
}
