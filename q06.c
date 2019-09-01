#include<stdio.h>

main(){
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%i", &n);

    int v[n], valor, v1, maior, menor, posi_maior = 0, posi_menor = 0;

    printf("Digite o elemento 1 do vetor: ");
    scanf("%i", &v1);
    v[0] = v1;
    maior = v1;
    menor = v1;

    for(int i = 1; i < n; i++){
        printf("Digite o elemento %i do vetor: ", i+1);
        scanf("%i", &valor);
        v[i] = valor;
        if(v[i] > maior){
            maior = valor;
            posi_maior = i;
        }
        if(v[i] < menor){
            menor = valor;
            posi_menor = i;
        }
    }

    printf("\n");
    printf("Maior -> v[%i] = %i", posi_maior, maior);
    printf("\nMenor -> v[%i] = %i", posi_menor, menor);

    printf("\n");
}
