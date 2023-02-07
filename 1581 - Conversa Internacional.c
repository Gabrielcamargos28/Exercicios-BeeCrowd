#include <stdio.h>
#include <string.h>

int main()}{
    char idiomaEntrada[20],idioma[20];
    int n,p;
    scanf("%d",&n);
    int teste = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&p);
        scanf("%s",idioma);
        for(int j=1;j<p;j++){
            scanf("%s",idiomaEntrada);
            if(strcmp(idioma,idiomaEntrada)){
                teste = 1;
            }
        }
        if(teste == 1){
            printf("%s\n",idioma);
        }else if(teste == 0){
            printf("ingles\n");
        }
    }
    return 0;
}
