#include<stdio.h>
#include<stdlib.h>


main(){
    int n;
    printf("Digite a quantidade de itens do vetor: ");
    scanf("%i", &n);

    float v[n], valor, somatorio = 0, media = 0;

    for(int i = 0; i < n; i++){
        printf("Digite o %i item do vetor: ", i+1);
        scanf("%f", &valor);
        v[i] = valor;
        somatorio += v[i];
    }

    media = somatorio / n;

    printf("\nSomatorio = %.2f", somatorio);
    printf("\nMedia = %.2f", media);
    printf("\n\n");
}
