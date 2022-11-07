#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,aux;

    printf("Qual numero da sua poltrona? 1 - 52: ");
    scanf("%d", &num);

    while(num<1 || num >52)
    {
        printf("ATENCAO, VALOR INVALIDO! 1 - 52 \nQual numero da sua poltrona? ");
        scanf("%d", &num);
    }

    aux = num%4;

    if(aux==1 || aux == 2)
    {
        printf("Fileira 1, ");
        if(aux/2==0)
        {
            printf("Janela, Direita");
        }
        else
        {
             printf("Corredor, Direito");
        }
    }
    else
    {


        printf("Fileira 2, ");
        if(aux/2==0)
        {
            printf("Janela, Esquerda");
        }
        else
        {
            printf("Corredor, Esquerda");
        }
    }
    return 0;
}
