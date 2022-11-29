#include <stdio.h>
#include <string.h>


int main()
{
    char L[100];
    int i,n,leds=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",L);
        for(int j=0; j<strlen(L); j++)
        {
            if(L[j] == '1')
            {
                leds+=2;
            }
            else if(L[j] == '2')
            {
                leds+=5;
            }
            else if(L[j] == '3')
            {
                leds+=5;
            }
            else if(L[j] == '4')
            {
                leds+=4;
            }
            else if(L[j] == '5')
            {
                leds+=5;
            }
            else if(L[j] == '6')
            {
                leds+=6;
            }
            else if(L[j] == '7')
            {
                leds+=3;
            }
            else if(L[j] == '8')
            {
                leds+=7;
            }
            else if(L[j] == '9')
            {
                leds+=6;
            }
            else if(L[j] == '0')
            {
                leds+=6;
            }
        }
        printf("%d leds\n",leds);
        leds = 0;
    }
    return 0;
}
