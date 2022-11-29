#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    char t[100];

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%s", t);

        for(int k=strlen(t); k>=0; k--){
            if(islower(t[k]) != 0){
                printf("%c", t[k]);
            }
        }

        printf("\n");
    }

    return 0;
}
