#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cidades_brasileiras.h"

// Função para calcular Densidade Populacional
float dens_pop(unsigned long pop, float area) {
    return pop / area;
}

// Função para calcular o PIB per capita 
float pib_pcapita(unsigned long pib, unsigned long pop) {
    return pib / pop;
}

// Função principal
int main(){

    int opcao,i,j;
    char cod;
    CartaCidade carta;

    //Declaração do array com 5 cartas para cada jogador
    CartaCidade carta_jogador1[10];
    CartaCidade carta_jogador2[10];

    // Inserindo semente aleatória usando o tempo em rand
    srand(time(NULL)); 
    
    //Sortear cartas para o jogador 1
    for(i = 0; i < 10; i++) {
        int num = rand() % 136;
        carta_jogador1[i] = cartas_cidades[num];
    }

    //Sortear cartas para o jogador 2
    for(i = 0; i < 10; i++) {
        int num = rand() % 136;
        carta_jogador2[i] = cartas_cidades[num];
    }
    
    //Limpeza de tela
    system("clear||cls");
    printf("\n##### SUPERTRUNFO CIDADES #####\n");

    //Exibição das cartas
    printf("*** Cartas Sorteada ***\n");
    i = rand() % 10;
    printf("Código: %s\n", carta_jogador1[i].codigo);
    printf("Estado: %s\n", carta_jogador1[i].estado);
    printf("Nome: %s\n", carta_jogador1[i].nome);
    printf("População: %lu\n", carta_jogador1[i].populacao);
    printf("Área: %.2f km²\n", carta_jogador1[i].area_km2);
    printf("PIB: %lu milhões\n", carta_jogador1[i].pib_milhoes);
    printf("Pontos Turísticos: %d\n", carta_jogador1[i].pontos_turisticos);
    printf("***********************\n");
    
    
    //Exibição dos atributos para escolha de qual será comparado
    printf("\n*** ATRIBUTOS ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    
    printf("\nQual atributo deseja comparar? ");
    scanf("%d", &opcao);
    
    system("clear||cls");
    printf("##### SUPERTRUNFO CIDADES #####\n");

    switch (opcao)
    {
    case 1:
        printf("\nPOPULAÇÃO\n");
        printf("Carta Jogador 1 - Cidade: %s | População: %lu\n",carta_jogador1[i].nome, carta_jogador1[i].populacao);
        printf("Carta Jogador 2 - Cidade: %s | População: %lu\n",carta_jogador2[i].nome, carta_jogador2[i].populacao);

        if (carta_jogador1[i].populacao > carta_jogador2[i].populacao){
            printf("\nResultado: Jogador1 venceu!!!\n%s - %lu habitantes", carta_jogador1[i].nome, carta_jogador1[i].populacao); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - %lu habitantes", carta_jogador2[i].nome, carta_jogador2[i].populacao);
        }
        break;
    
    default:
        break;
    }

    //Comparacao de atributos
    //if (c1.area > c2.area){
    //    printf("\nResultado: Carta 1 (%s) venceu!", c1.nomeDaCidade); 
    //} else {
    //    printf("\nResultado: Carta 2 (%s) venceu!", c2.nomeDaCidade);
    //}
    getchar();
    printf("\n\nDigite ENTER para encerrar...");
    getchar();

    return 0;
}