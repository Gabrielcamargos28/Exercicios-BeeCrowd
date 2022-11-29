#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %s",str1,str2);

        if(strcmp(str1,str2)==0)
        {
            printf("empate\n");

        }
        else if (strcmp(str1,"pedra")==0)
        {
            if((strcmp(str2,"tesoura")==0) || (strcmp(str2,"lagarto")==0))
            {
                printf("rajesh\n");
            }
            else
            {
                printf("sheldon\n");
            }
        }
        else if (strcmp(str1,"tesoura")==0)
        {
            if((strcmp(str2,"papel")==0)||(strcmp(str2,"lagarto")==0))
            {
                printf("rajesh\n");
            }
            else
            {
                printf("sheldon\n");
            }
        }

        else if(strcmp(str1,"papel")==0)
        {
            if((strcmp(str2,"pedra")==0) || (strcmp(str2,"spock")==0))
            {
                printf("rajesh\n");
            }
            else
            {
                printf("sheldon\n");
            }
        }
        else if(strcmp(str1,"lagarto")==0)
        {
            if((strcmp(str2,"papel")==0)||(strcmp(str2,"spock")==0))
            {
                printf("rajesh\n");
            }
            else
            {
                printf("sheldon\n");
            }
        }
        else if(strcmp(str1,"spock")==0)
        {
            if((strcmp(str2,"pedra")==0) ||(strcmp(str2,"tesoura")==0))
            {
                printf("rajesh\n");
            }
            else
            {
                printf("sheldon\n");
            }
        }
    }
    return 0;
}

