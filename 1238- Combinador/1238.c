#include <stdio.h>
#include <string.h>
int main() {
    char str1[51],str2[51];
    int n,i,j,tam1,maior=0,tam2;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",&str1,&str2);
        tam1 = strlen(str1);
        tam2 = strlen(str2);

        if(tam1 > tam2){
            maior = tam1;
        }else{
            maior=tam2;
        }
        for(j=0;j<maior;j++){
            if(j<tam1){
                printf("%c",str1[j]);
            }
            if(j< tam2){
                printf("%c",str2[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
