#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[20];

    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Sua idade é: %d anos\n", idade);

    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("Sua altura é %.2fm\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é %s\n\n", nome);
    
    return 0;
}