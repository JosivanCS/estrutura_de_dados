#include<stdio.h>
#include<stdlib.h>

main(){
    int v[50], v_somatorio_faces[6] = {0};

    for(int i = 0; i < 50; i++){
        printf("\Resultado %i lancamento: ", i+1);
        scanf("%i", &v[i]);
        v_somatorio_faces[v[i]-1] += 1;
    }

    for(int i = 0; i < 6; i++){
        printf("\nTotal face %i = %.2f", i+1, v_somatorio_faces[i] / 50.00 * 100);
    }

    printf("\n\n");
}
