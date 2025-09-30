#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("\nEntre com a temperatura: ");
    scanf("%f", &temperatura);
    
    printf("\nEntre com a umidade: ");
    scanf("%f", &umidade);

    printf("\nEntre com o estoque: ");
    scanf("%u", &estoque);

    if( temperatura >  30){
        printf("\nA temperatura está alta");
    } else {
        printf("\nTemperatura nominal");
    }

    if (umidade > 50){
        printf("\nUmidade elevada");
    } else {
        printf("\nUmidade nominal");
    }

    if (estoque < estoqueMinimo){
        printf("\nEstoque abaixo do minimo");
    } else {
        printf("\nEstoque normal");
    }
    printf("\n\n");
    return 0;
}