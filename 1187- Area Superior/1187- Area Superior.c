#include <stdio.h>
int main()
{
    int i,j,c=0;
    char v;
    double m[12][12],soma=0;

    scanf("%c",&v);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
            if((i>j)&&(i+j<12-1))
            {
                soma+=m[i][j];
                c++;
            }
        }

    }
    if(v =='S')
    {
        printf("%.1lf\n",soma);
    }
    else if(v =='M')
    {
        printf("%.1lf\n",soma/c);
    }
    return 0;

}
