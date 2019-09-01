#include<stdio.h>
#include<string.h>
#include<math.h>

main(){
    printf("Digite os 8 elementos do vetor \nOBS: Somente (0 e 1)\n");
    int v[8], valor, decimal = 0, p1, p2;

    for(int i = 7; i >= 0; i--){
        scanf("%i", &valor);
        v[i] = valor;
        decimal += v[i] * pow(2, i);
    }

    for(int i = 7; i > 3; i--){
        p1 += v[i] * pow(2, i);
    }

    for(int i = 3; i >= 0; i--){
        p2 += v[i] * pow(2, i);
    }

    /*
    if (p1 == 10){
        char hexa_p1 = "A";
    }else if (p1 == 11){
        char hexa_p1 = "B";
    }else if (p1 == 12){
        char hexa_p1 = "C";
    }else if (p1 == 13){
        char hexa_p1 = "D";
    }else if (p1 == 14){
        char hexa_p1 = "E";
    }else if (p1 == 15){
        char hexa_p1 = "F";
    }else{
        int hexa_p1 = p1;
    }
    */

    printf("\nDecimal = %i",decimal);
    printf("\n");
    /*printf("\nHexadecimal = %i",decimal);*/

}
