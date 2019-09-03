#include<stdio.h>
#include<stdlib.h>


main(){
    int n;
    printf("Digite a quantidade de itens do vetor: ");
    scanf("%i", &n);

    int v[n], valor, v1, maior, menor, i_maior = 0, i_menor = 0;

    printf("Digite o 1 item do vetor: ");
    scanf("%i", &v1);
    v[0] = v1;
    maior = v1;
    menor = v1;

    for(int i = 1; i < n; i++){
        printf("Digite o %i item do vetor: ", i+1);
        scanf("%i", &valor);
        v[i] = valor;
        if(v[i] > maior){
            maior = valor;
            i_maior = i;
        }
        if(v[i] < menor){
            menor = valor;
            i_menor = i;
        }
    }

    printf("\n");
    printf("Maior -> v[%i] = %i\nPosicao --> %i", i_maior, maior, i_maior + 1);
    printf("\n\n");
    printf("\nMenor -> v[%i] = %i\nPosicao --> %i", i_menor, menor, i_menor + 1);

    printf("\n\n");
}
