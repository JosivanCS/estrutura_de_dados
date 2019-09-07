#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char caractere;
    scanf("%c", &caractere);

    if(eh_vogal(caractere) == 1){
        printf("Eh vogal");
    }else{
        printf("Nao eh vogal");
    }

    return 0;

}

int eh_vogal(char caractere){
    switch(caractere)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
