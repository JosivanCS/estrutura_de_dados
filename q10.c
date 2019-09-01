#include<stdio.h>

main(){
    float v[] = {}, valor, somatorio = 0, media = 0;

    printf("Digite o 1 item do vetor: ");
    scanf("%f", &valor);
    v[0] = valor;
    int cont = 0, i = 1;
    somatorio = v[0];

    while (valor != 0){
        printf("Digite o %i item do vetor: ", i+1);
        scanf("%f", &valor);
        v[i] = valor;
        somatorio += v[i];
        i += 1;
        cont += 1;
    }

    media = somatorio / cont;

    printf("\nSomatorio = %.2f", somatorio);
    printf("\nMedia = %.2f", media);
    printf("\n\n");
}
