int main(void)
{
    int i, aux=0,vet[20];

    printf("Digite 20 numeros\n");

    for(i=0; i<20; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i=0; i<20; i++)
    {
        printf("Vetor [%d] %d\n", i+1, vet[i]);
    }

    int maior;


    for (i = 0; i < 20; i++)
    {
        if (i == 0)
        {
            maior = vet[i];
        }
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    printf ("Maior vetor = %d \n", maior);

    for (i = 0; i < 20; i++)
    {
        if (i == 0)
        {
            maior = vet[i];
        }
        if (vet[i] < maior)
        {
            maior = vet[i];
        }
    }
     printf ("Menor vetor = %d \n", maior);

     for (i = 0; i < 20; i++)
    {
        aux += vet[i];
    }
    printf("A media e: %d", aux/20);
}
