#include <stdio.h>
#include <math.h>


int main()
{
    int evento,hr,min,sec;

    scanf("%d",evento);

    hr = evento / 60;

    min = evento / 60;

    sec = evento / 3600;

    printf("%d:%d:%d\n",hr,min,sec);

    return 0;
}
