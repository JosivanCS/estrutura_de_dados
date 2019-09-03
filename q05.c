#include<stdio.h>

main(){
    int n;
    printf("Digite a quantidade de itens do vetor A: ");
    scanf("%i", &n);

    int v1[n], v2[n], valor;

    for(int i = 0; i < n; i++){
        printf("Digite o %i item do vetor A: ", i+1);
        scanf("%i", &valor);
        v1[i] = valor;
        if(v1[i] % 2 == 0){
            v2[i] = 0;
        }else{
            v2[i] = 1;
        }
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf("\nvB[%i] = %i", i, v2[i]);
    }

    printf("\n\n");
}
