#include<stdio.h>
#include<string.h>
#include<math.h>

main(){
    printf("Digite os 8 elementos do vetor \nOBS: Somente (0 e 1)\n");
    int v[8], valor, decimal ;

    for(int i = 7; i >= 0; i--){
        scanf("%i", &valor);
        v[i] = valor;
        decimal += v[i] * pow(2, i);
    }

    printf("\nBinario -> ");

    for(int i = 7; i >= 0; i--){
        printf("%i", v[i]);
    }

    printf("\nDecimal = %i",decimal);
    printf("\nHexadecimal = %X",decimal);
    printf("\n\n");
}
