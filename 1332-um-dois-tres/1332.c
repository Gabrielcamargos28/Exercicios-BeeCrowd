#include <stdio.h>
#include <string.h>

int main(){

    char p[10];
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",p);
        if(strlen(p)>4){
            printf("3\n");
        }else if((p[0]=='o' && p[2]=='e')||(p[0]=='o'&& p[1]=='n')||(p[1]=='n'&&p[2]=='e')){
            printf("1\n");
        }else{
            printf("2\n");
        }

    }
    return 0;
}
