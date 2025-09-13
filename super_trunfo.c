#include <stdio.h>
#include <stdlib.h>


int main(){
    //Estrutura da carta com seus atributos
    struct carta
    {
        char estado[20], nomeDaCidade[50],codigoCarta[20];
        int populacao, pontosTuristicos;
        float area, pib, densidadePopulacional, pibPerCapita;
    };
    
    //Declaração da variável do tipo da struct criada
    struct carta c1, c2;

    //Limpeza da tela para windows e linux
    system("clear||cls");
    printf("\n##### SUPERTRUNFO CIDADES #####\n");

    //Recebendo dados dos usuários CARTA 1
    printf("\nCADASTRO CARTA 1\n");
    c1.codigoCarta[20] = "Carta1";
    printf("Nome da Cidade: ");
    scanf("%[^\n]", c1.nomeDaCidade);
    getchar(); // limpa o buffer
    printf("Estado [UF]: ");
    scanf("%s", c1.estado);
    getchar();
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    getchar();
    printf("Area: ");
    scanf("%f", &c1.area);
    getchar();
    printf("PIB: ");
    scanf("%f", &c1.pib);
    getchar();
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);
    getchar();

    // Calculando Densidade Populacional e Pib per capita    
    c1.densidadePopulacional = c1.populacao / c1.area;
    c1.pibPerCapita = c1.pib / c1.populacao;
    
    //Limpeza de tela
    system("clear||cls");
    printf("\n##### SUPERTRUNFO CIDADES #####\n");

    //Recebendo dados dos usuários CARTA 2
    printf("\nCADASTRO CARTA 2\n");
    c2.codigoCarta[20] = "Carta2";
    printf("Nome da Cidade: ");
    scanf("%[^\n]", c2.nomeDaCidade);
    getchar(); // limpa o buffer
    printf("Estado [UF]: ");
    scanf("%s", c2.estado);
    getchar();
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    getchar();
    printf("Area: ");
    scanf("%f", &c2.area);
    getchar();
    printf("PIB: ");
    scanf("%f", &c2.pib);
    getchar();
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);
    getchar();

    // Calculando Densidade Populacional e Pib per capita    
    c2.densidadePopulacional = c2.populacao / c2.area;
    c2.pibPerCapita = c2.pib / c2.populacao;

    //Limpeza de tela
    system("clear||cls");
    printf("\n##### SUPERTRUNFO CIDADES #####\n");

    printf("\nComparação de cartas (Atributo: Area):\n");
    printf("\nCarta 1 - %s (%s): %.2fkm²", c1.nomeDaCidade,c1.estado, c1.area); 
    printf("\nCarta 2 - %s (%s): %.2fkm²", c2.nomeDaCidade,c2.estado, c2.area);

    //Comparacao de atributos
    if (c1.area > c2.area){
        printf("\nResultado: Carta 1 (%s) venceu!", c1.nomeDaCidade); 
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!", c2.nomeDaCidade);
    }

    printf("\n\nDigite ENTER para encerrar...");
    getchar();

    return 0;
}