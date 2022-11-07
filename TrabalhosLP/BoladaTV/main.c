#include <stdio.h>
#include <stdlib.h>

int main()
{
    int QtdAcertos, ValorTotal=100,aux,aux2, milhao = 1000000;


    printf("Quantas perguntas voce acertou?: ");
    scanf("%d", &QtdAcertos);



    while(QtdAcertos<1){
    printf("ATENCAO! Quantas perguntas voce acertou?: ");
    scanf("%d", &QtdAcertos);
    }


    for(aux=1;aux<=QtdAcertos;aux++){

        ValorTotal=ValorTotal*2;
        aux2 = ValorTotal - 100;

    }


    if(aux2 >= milhao){
        printf("Parabens, voce ganhou +1 milhao!! %d", aux2);
    }else{
            printf("Seu premio e: %d", aux2);
        }
    return 0;
}
