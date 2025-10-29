#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "paises.h"

// Função para calcular Densidade Populacional
float dens_pop(int pop, float area) {
    return (float)pop / area;
}

// Função para calcular o PIB per capita
float pib_pcapita(float pib, int pop) {
    //Conversao do PIB de milhoes para reais
    return (float)((pib*1000000) / pop);
}

// Função principal
int main(){

    int opcao,i,j;
    char cod;
    CartaPais carta;

    //Declaração do array com 5 cartas para cada jogador
    CartaPais carta_jogador1[10];
    CartaPais carta_jogador2[10];

    // Inserindo semente aleatória usando o tempo em rand
    srand(time(NULL)); 
    
    //Sortear cartas para o jogador 1
    for(i = 0; i < 10; i++) {
        int num = rand() % 136;
        carta_jogador1[i] = cartas_paises[num];
    }

    //Sortear cartas para o jogador 2
    for(i = 0; i < 10; i++) {
        int num = rand() % 136;
        carta_jogador2[i] = cartas_paises[num];
    }
    
    //Limpeza de tela
    system("clear||cls");
    printf("\n##### SUPERTRUNFO CIDADES #####\n");

    //Calculando densidade populacional e pib per capita
    float dens0 = dens_pop(carta_jogador1[i].populacao, carta_jogador1[i].area_km2);
    float ppc0 = pib_pcapita(carta_jogador1[i].pib_milhoes, carta_jogador1[i].populacao);

    //Exibição das cartas
    printf("*** Carta Sorteada ***\n");
    i = rand() % 10;
    printf("Código: %s\n", carta_jogador1[i].codigo);
    printf("Nome: %s\n", carta_jogador1[i].nome);
    printf("População: %d\n", carta_jogador1[i].populacao);
    printf("Área: %.2f km²\n", carta_jogador1[i].area_km2);
    printf("PIB: %.2f milhões\n", carta_jogador1[i].pib_milhoes);
    printf("Pontos Turísticos: %d\n", carta_jogador1[i].pontos_turisticos);
    printf("Densidade Populacional: %.0f hab/km²\n", dens0);
    printf("PIB per capita: R$%.2f\n", ppc0);
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
        printf("Carta Jogador 1 - Cidade: %s | População: %d\n",carta_jogador1[i].nome, carta_jogador1[i].populacao);
        printf("Carta Jogador 2 - Cidade: %s | População: %d\n",carta_jogador2[i].nome, carta_jogador2[i].populacao);

        if (carta_jogador1[i].populacao > carta_jogador2[i].populacao){
            printf("\nResultado: Jogador1 venceu!!!\n%s - %d habitantes", carta_jogador1[i].nome, carta_jogador1[i].populacao); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - %d habitantes", carta_jogador2[i].nome, carta_jogador2[i].populacao);
        }
        break;

    case 2:
        printf("\nÁREA\n");
        printf("Carta Jogador 1 - Cidade: %s | Área: %.2f\n",carta_jogador1[i].nome, carta_jogador1[i].area_km2);
        printf("Carta Jogador 2 - Cidade: %s | Área: %.2f\n",carta_jogador2[i].nome, carta_jogador2[i].area_km2);

        if (carta_jogador1[i].area_km2 > carta_jogador2[i].area_km2){
            printf("\nResultado: Jogador1 venceu!!!\n%s - %.2f km²", carta_jogador1[i].nome, carta_jogador1[i].area_km2); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - %.2f km²", carta_jogador2[i].nome, carta_jogador2[i].area_km2);
        }
        break;
    
    case 3:
        printf("\nPIB\n");
        printf("Carta Jogador 1 - Cidade: %s | Área: %.2f\n",carta_jogador1[i].nome, carta_jogador1[i].pib_milhoes);
        printf("Carta Jogador 2 - Cidade: %s | Área: %.2f\n",carta_jogador2[i].nome, carta_jogador2[i].pib_milhoes);

        if (carta_jogador1[i].pib_milhoes > carta_jogador2[i].pib_milhoes){
            printf("\nResultado: Jogador1 venceu!!!\n%s - PIB %lu milhões de reais", carta_jogador1[i].nome, carta_jogador1[i].pib_milhoes); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - PIB %lu milhões de reais", carta_jogador2[i].nome, carta_jogador2[i].pib_milhoes);
        }
        break;
    
    case 4:
        printf("\nNúmero de Pontos Turísticos\n");
        printf("Carta Jogador 1 - Cidade: %s | Número de Pontos Turísticos: %d\n",carta_jogador1[i].nome, carta_jogador1[i].pontos_turisticos);
        printf("Carta Jogador 2 - Cidade: %s | Número de Pontos Turísticos: %d\n",carta_jogador2[i].nome, carta_jogador2[i].pontos_turisticos);

        if (carta_jogador1[i].pontos_turisticos > carta_jogador2[i].pontos_turisticos){
            printf("\nResultado: Jogador1 venceu!!!\n%s - %d Pontos Turísticos", carta_jogador1[i].nome, carta_jogador1[i].pontos_turisticos); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - %d Pontos Turísticos", carta_jogador2[i].nome, carta_jogador2[i].pontos_turisticos);
        }
        break;

    case 5:
        float dens1, dens2;
        dens1 = dens_pop(carta_jogador1[i].populacao, carta_jogador1[i].area_km2);
        dens2 = dens_pop(carta_jogador2[i].populacao, carta_jogador2[i].area_km2);    
        
        printf("\nDensidade Populacional\n");
        printf("Carta Jogador 1 - Cidade: %s | Densidade Populacional: %.2f Habitantes por km²\n",carta_jogador1[i].nome, dens1);
        printf("Carta Jogador 2 - Cidade: %s | Densidade Populacional: %.2f Habitantes por km²\n",carta_jogador2[i].nome, dens2);

        if (dens1 < dens2){
            printf("\nResultado: Jogador1 venceu!!!\n%s - %.2f hab/km²", carta_jogador1[i].nome, dens1); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - %.2f hab/km²", carta_jogador2[i].nome, dens2);
        }
        break;

    case 6:
        float ppc1, ppc2;
        ppc1 = pib_pcapita(carta_jogador1[i].pib_milhoes, carta_jogador1[i].populacao);
        ppc2 = pib_pcapita(carta_jogador2[i].pib_milhoes, carta_jogador2[i].populacao);    
        
        printf("\nPIB Per Capita\n");
        printf("Carta Jogador 1 - Cidade: %s | PIB Per Capita: R$%.2f \n",carta_jogador1[i].nome, ppc1);
        printf("Carta Jogador 2 - Cidade: %s | PIB Per Capita: R$%.2f \n",carta_jogador2[i].nome, ppc2);

        if (ppc1 > ppc2){
            printf("\nResultado: Jogador1 venceu!!!\n%s - PIB per capita: R$%.2f", carta_jogador1[i].nome, ppc1); 
        } else {
            printf("\nResultado: Jogador2 venceu!!!\n%s - PIB per capita: R$%.2f", carta_jogador2[i].nome, ppc2);
        }
        break;
    
    default:
        break;
    }

    getchar();
    printf("\n\nDigite ENTER para encerrar...");
    getchar();

    return 0;
}