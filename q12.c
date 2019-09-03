#include<stdio.h>
#include<stdlib.h>


main(){
    float v[] = {}, valor, somatorio, media = 0;

    printf("Entre com os valores correspondente a nota do aluno.\nOBS: -1 Para SAIR!\n");
    printf("\nNOTA: ");
    scanf("%f", &valor);

    int cont = 0, i = 1, tot_acima_med = 0, tot_abaixo_set = 0;
    v[0] = valor;
    somatorio = valor;

    while (valor != -1){
        printf("Proxima NOTA: ", i+1);
        scanf("%f", &valor);
        v[i] = valor;
        somatorio += v[i];
        i += 1;
        cont += 1;
    }

    media = (somatorio+1) / cont;

    printf("\nQuantidade de Notas = %i", cont);
    printf("\nNotas --> ");

    for(int i = 0; i < cont; i++){
        if (v[i] > media){
            tot_acima_med += 1;
        }
        if (v[i] < 7.00){
            tot_abaixo_set += 1;
        }
        printf("%.2f ", v[i]);
    }

    printf("\nNotas Ordem inversa: ");

    for(int i = cont-1; i >= 0; i--){
        printf("\n%.2f", v[i]);
    }

    printf("\nSomatorio = %.2f", somatorio+1);
    printf("\nMedia = %.2f", media);
    printf("\nQuantidade de notas acima da media = %i", tot_acima_med);
    printf("\nQuantidade de notas abaixo de sete = %i", tot_abaixo_set);
    printf("\n\nAcabou! EH TETRA, EH TETRA, EH TETRA...");
    printf("\n\n");
}
