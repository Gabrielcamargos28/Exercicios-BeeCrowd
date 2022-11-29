#include <stdio.h>

int main()
{
    int p1,p2;

    scanf("%d %d",&p1,&p2);

    if(p2 >= 0 && p2 <= 2)
    {
        printf("nova\n");
    }
    else if(p2 >=97 && p2 <=100)
    {
        printf("cheia\n");

    }
    else if(p1 > p2)
    {
        printf("minguante\n");
    }
    else if(p2 >=3 && p2 <=96)
    {
        printf("crescente\n");
    }

    return 0;
}
