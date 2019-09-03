#include<stdio.h>
#include<stdlib.h>


main(){
    int n;
    printf("Quantidade de elementos sequencia fibonacci: ");
    scanf("%i", &n);

    int v[n], f1 = 0, f2 = 1, atual;
    v[0] = 0;
    v[1] = 1;

    for(int i = 2; i < n; i++){
        atual = f1 + f2;
        f1 = f2;
        f2 = atual;
        v[i] = atual;
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf(" %i", v[i]);
    }

    printf("\n\n");
}
