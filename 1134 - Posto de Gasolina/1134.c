#include <stdio.h>

int main()
{
    int tipo,alc=0,die=0,gas=0;


    do
    {
        scanf("%d",&tipo);
        switch(tipo)
        {

        case 1:
            alc++;
            break;
        case 2:
            gas++;
            break;
        case 3:
            die++;
            break;
        case 4:
            break;
        }


    }
    while(tipo!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);

    return 0;
}
