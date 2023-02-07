#include <stdio.h>
#include <string.h>

int main(){
    char idiomaEntrada[20],idioma[20];
    int n,p;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&p);
        int teste = 1;
        scanf("%s",idioma);
        for(int j=1;j<p;j++){
            scanf("%s",idiomaEntrada);
            if(strcmp(idioma,idiomaEntrada)){
                teste = 0;
            }
        }
        if(teste == 1){
            printf("%s\n",idioma);
        }else{
            printf("ingles\n");
        }
    }
    return 0;
}
