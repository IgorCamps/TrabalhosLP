#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,modelo, aux,aux2;

    printf("Qual modelo de aviao? \n1 - AirBus ou Boing\n2 - Padrao internacional\n3 - Foccker 100\n");
    scanf("%d", &modelo);

    while(modelo<1 || modelo >3)
    {
        printf("ATENÃO! Qual modelo de aviao? \n1 - AirBus ou Boing\n2 - Padrao internacional\n3 - Foccker 100\n");
        scanf("%d", &modelo);
    }

    printf("Qual numero da sua poltrona? ");
    scanf("%d", &num);

    while(num<1 || num >200)
    {
        printf("ATENCAO, VALOR INVALIDO!\nQual numero da sua poltrona? ");
        scanf("%d", &num);
    }

    switch(modelo)
    {
    case 1:
        aux = num%6;
        if(aux==1 || aux== 2|| aux== 3)
        {
            printf("Fileira 1 ");
            aux2 = aux%3;
            if(aux2==1)
            {
                printf("Janela ");

            }
            else if(aux2==2)
            {
                printf("Meio ");
            }
            else
            {
                printf("Corredor ");
            }
            printf("Esquerdo");
        }
        else
        {
            aux2 = aux%3;
            printf("Fileira 2 ");


            if(aux2==1)
            {

                printf("Corredor ");
            }
            else if(aux2==2)
            {
                printf("Meio ");
            }
            else
            {
                printf("Janela ");

            }
            printf("Direito");
        }
        break;

    case 2:

        aux = num%8;
        aux2 = num%2;

        if(aux==1 || aux== 2)
        {
            printf("Fileira 1 ");
            if(aux2==1)
            {
                printf("Janela ");
            }
            else
            {
                printf("Corredor ");
            }
            printf("Direito");
        }
        else if(aux==7 || aux== 0)
        {
            printf("Fileira 3 ");
            if(aux2==0)
            {
                printf("Janela ");
            }
            else
            {
                printf("Corredor ");
            }
            printf("Direito");
        }
        else
        {
            aux2 = num%4;
            printf("Fileira 2 ");
            if(aux2==0 || aux2 == 1)
            {
                printf(" Meio");
            }
            else
            {
                printf(" Corredor ");
            }
        }
        break;

    case 3 :

        aux = num%5;
        aux2 = aux%3;

        if(aux==1 || aux==2 || aux==3)
        {
            printf("Fileira 1 ");
            if(aux2==1)
            {
                printf("Janela");
            }
            else if(aux2==2)
            {
                printf("Meio");
            }
            else
            {
                printf("Corredor");
            }
        }
        else
        {
            aux2 = aux/2 + 1;
            printf("Fileira 2 ");

            if(aux2==3)
            {
                printf("Corredor ");
            }
            else
            {
                printf("Janela ");
            }
            printf("Direito");

        }
        break;

    }

    return 0;
}
