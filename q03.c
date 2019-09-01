#include<stdio.h>
#include<math.h>

main(){
    int v[20], valor, s = 0;
    printf("Digite os 20 elementos do vetor");

    for(int i = 0; i < 20; i++){
        printf("\nElemento %d: ", i+1);
        scanf("%i", &valor);
        v[i] = valor;
    }

    for(int i = 0; i < 20/2; i++){
        s += pow(v[i] - v[19 - i], 2);
    }

    printf("\nS = %d", s);
    printf("\n");
}
