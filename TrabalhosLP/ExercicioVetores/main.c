int main(void)
{
    int i=0, aux,vet[10];

    printf("Digite 10 numeros\n");

    for(; i<10; i++){
        scanf("%d", &vet[i]);
    }
    for(i=9;i>=0;i--){
        printf("Vetor inverso [%d] %d\n", 10-i, vet[i]);
    }

}
