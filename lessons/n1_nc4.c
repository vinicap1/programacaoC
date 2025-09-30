#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.78;
    char opcao = 'S';
    char nome[20] = "vinicius";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);


    return 0;
}