#include<stdio.h>
#include<stdlib.h>


main(){
    int n;
    printf("Digite a quantidade de itens do vetor: ");
    scanf("%i", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite o %i item do vetor: ", i+1);
        scanf("%i", &v[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    printf("\nVetor ordenado  --> [ ");

    for(int i = 0; i < n; i++){
        printf("%i ", v[i]);
    }

    printf("]");
    printf("\n\n");
}

