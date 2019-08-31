#include<stdio.h>

main(){
    int n;
    printf("Digite a quantidade de elementos do vetor 1 e 2: ");
    scanf("%i", &n);

    int v1[n], v2[n], v3[2*n], valor, tam = 2 * n;

    for(int i = 1; i <= n; i++){
        printf("Digite o %i elemento do vetor 1: ", i);
        scanf("%i", &valor);
        v1[i] = valor;
        v3[i] = valor;
        printf("\n");
    }

    printf("\n");
    int p = n + 1;

    for(int i = 1; i <= n; i++){
        printf("Digite o %i elemento do vetor 2: ", i);
        scanf("%i", &valor);
        v2[i] = valor;
        v3[p] = v2[i];
        p += 1;
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= tam; i++){
        printf("%i\n", v3[i]);
    }
}
