/*
 * Arquivo de dados das cartas do jogo Super Trunfo - Países do Mundo
 * Contém informações de 100 países
 * Estrutura: {código, nome, população, área, PIB, pontos_turísticos, densidade_populacional, PIB_per_capita}
 * Observação: A densidade populacional e o PIB per capita serão calculados em tempo de execução na main
 */

#ifndef PAISES_H
#define PAISES_H

// Estrutura para representar uma carta de país
typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area_km2;
    float pib_milhoes;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} CartaPais;

// Array com as 100 cartas de países do mundo
CartaPais cartas_paises[100] = {
    {"Carta1", "China", 1416100000, 9706961.0, 19230000, 60},
    {"Carta2", "Índia", 1463870000, 3287590.0, 4190000, 43},
    {"Carta3", "Estados Unidos", 347276000, 9372610.0, 30510000, 26},
    {"Carta4", "Indonésia", 285721000, 1904569.0, 1430000, 10},
    {"Carta5", "Paquistão", 255220000, 881912.0, 410000, 6},
    {"Carta6", "Nigéria", 237528000, 923768.0, 188000, 2},
    {"Carta7", "Brasil", 212812000, 8515767.0, 2130000, 24},
    {"Carta8", "Bangladesh", 175687000, 147570.0, 467000, 3},
    {"Carta9", "Rússia", 143997000, 17098242.0, 2080000, 32},
    {"Carta10", "Etiópia", 135472000, 1104300.0, 109000, 12},
    {"Carta11", "México", 131947000, 1964375.0, 1690000, 35},
    {"Carta12", "Japão", 123103000, 377975.0, 4190000, 26},
    {"Carta13", "Egito", 118366000, 1002450.0, 347000, 7},
    {"Carta14", "Filipinas", 116787000, 300000.0, 497000, 6},
    {"Carta15", "Congo (RDC)", 112832000, 2344858.0, 70000, 5},
    {"Carta16", "Vietnã", 101599000, 331212.0, 491000, 8},
    {"Carta17", "Irã", 92418000, 1648195.0, 341000, 28},
    {"Carta18", "Turquia", 87685000, 783562.0, 1440000, 21},
    {"Carta19", "Alemanha", 84075000, 357592.0, 4740000, 55},
    {"Carta20", "Tailândia", 71620000, 513120.0, 546000, 8},
    {"Carta21", "Tanzânia", 70546000, 947300.0, 78000, 7},
    {"Carta22", "Reino Unido", 69551000, 242495.0, 3840000, 35},
    {"Carta23", "França", 66651000, 551695.0, 3210000, 54},
    {"Carta24", "África do Sul", 64747000, 1221037.0, 410000, 12},
    {"Carta25", "Itália", 59146000, 301336.0, 2420000, 61},
    {"Carta26", "Quênia", 57533000, 580367.0, 132000, 8},
    {"Carta27", "Myanmar", 54851000, 676578.0, 61000, 2},
    {"Carta28", "Colômbia", 53426000, 1141748.0, 428000, 9},
    {"Carta29", "Coreia do Sul", 51667000, 100210.0, 1790000, 16},
    {"Carta30", "Sudão", 51662000, 1886068.0, 36000, 3},
    {"Carta31", "Uganda", 51385000, 241550.0, 53000, 3},
    {"Carta32", "Espanha", 47890000, 505990.0, 1800000, 50},
    {"Carta33", "Argélia", 47435000, 2381741.0, 269000, 7},
    {"Carta34", "Iraque", 47021000, 438317.0, 258000, 6},
    {"Carta35", "Argentina", 45851000, 2780400.0, 683000, 12},
    {"Carta36", "Afeganistão", 43844000, 652230.0, 20000, 2},
    {"Carta37", "Iêmen", 41774000, 527968.0, 25000, 5},
    {"Carta38", "Canadá", 40127000, 9984670.0, 2230000, 22},
    {"Carta39", "Austrália", 26974000, 7692024.0, 1770000, 21},
    {"Carta40", "Malásia", 35978000, 330803.0, 445000, 6},
    {"Carta41", "Arábia Saudita", 34566000, 2149690.0, 1080000, 8},
    {"Carta42", "Marrocos", 38431000, 446550.0, 166000, 9},
    {"Carta43", "Polônia", 38141000, 312696.0, 980000, 17},
    {"Carta44", "Uzbequistão", 37053000, 448978.0, 132000, 7},
    {"Carta45", "Peru", 34577000, 1285216.0, 303000, 13},
    {"Carta46", "Cazaquistão", 20844000, 2724900.0, 301000, 6},
    {"Carta47", "Gana", 35000000, 238533.0, 82000, 2},
    {"Carta48", "Nepal", 31000000, 147516.0, 46000, 4},
    {"Carta49", "Ucrânia", 38980000, 603550.0, 206000, 8},
    {"Carta50", "Romênia", 18909000, 238397.0, 403000, 11},
    {"Carta51", "Países Baixos", 18347000, 41850.0, 1270000, 13},
    {"Carta52", "Chile", 19860000, 756102.0, 344000, 7},
    {"Carta53", "Equador", 18290000, 283561.0, 126000, 5},
    {"Carta54", "Camboja", 17500000, 181035.0, 49000, 5},
    {"Carta55", "Bélgica", 11759000, 30528.0, 685000, 16},
    {"Carta56", "Grécia", 9939000, 131957.0, 267000, 19},
    {"Carta57", "Portugal", 10412000, 92212.0, 321000, 17},
    {"Carta58", "Suécia", 10657000, 450295.0, 620000, 15},
    {"Carta59", "Áustria", 9114000, 83879.0, 534000, 12},
    {"Carta60", "Suíça", 8967000, 41284.0, 947000, 13},
    {"Carta61", "Israel", 9517000, 22072.0, 583000, 9},
    {"Carta62", "Emirados Árabes", 11346000, 83600.0, 549000, 1},
    {"Carta63", "Jordânia", 11500000, 89342.0, 56000, 7},
    {"Carta64", "Líbano", 5500000, 10452.0, 20000, 6},
    {"Carta65", "Singapura", 5871000, 728.0, 565000, 1},
    {"Carta66", "Noruega", 5623000, 385207.0, 504000, 8},
    {"Carta67", "Dinamarca", 6003000, 42952.0, 450000, 12},
    {"Carta68", "Finlândia", 5623000, 338424.0, 304000, 7},
    {"Carta69", "Sri Lanka", 22000000, 65610.0, 99000, 8},
    {"Carta70", "Costa Rica", 5300000, 51100.0, 103000, 4},
    {"Carta71", "Qatar", 3116000, 11586.0, 223000, 1},
    {"Carta72", "Oman", 5300000, 309500.0, 105000, 5},
    {"Carta73", "Panamá", 4500000, 75417.0, 90000, 6},
    {"Carta74", "Nova Zelândia", 5252000, 270467.0, 249000, 3},
    {"Carta75", "Irlanda", 5308000, 70273.0, 599000, 2},
    {"Carta76", "Croácia", 4000000, 56594.0, 104000, 10},
    {"Carta77", "Mongólia", 3500000, 1564110.0, 18000, 6},
    {"Carta78", "Armênia", 3000000, 29743.0, 19000, 3},
    {"Carta79", "Geórgia", 3700000, 69700.0, 37000, 4},
    {"Carta80", "Albânia", 2800000, 28748.0, 30000, 4},
    {"Carta81", "Uruguai", 3400000, 176215.0, 85000, 3},
    {"Carta82", "Paraguai", 7400000, 406752.0, 47000, 1},
    {"Carta83", "Bolívia", 12500000, 1098581.0, 57000, 7},
    {"Carta84", "Senegal", 18800000, 196722.0, 37000, 7},
    {"Carta85", "Tunísia", 12700000, 163610.0, 59000, 9},
    {"Carta86", "Azerbaijão", 10500000, 86600.0, 76000, 5},
    {"Carta87", "Quirguistão", 7200000, 199951.0, 14000, 3},
    {"Carta88", "Tadjiquistão", 10500000, 143100.0, 12000, 4},
    {"Carta89", "Turcomenistão", 6700000, 488100.0, 72000, 5},
    {"Carta90", "Guatemala", 18500000, 108889.0, 121000, 4},
    {"Carta91", "Cuba", 11200000, 109884.0, 107000, 9},
    {"Carta92", "República Dominicana", 11521000, 48671.0, 128000, 1},
    {"Carta93", "Honduras", 10600000, 112492.0, 39000, 2},
    {"Carta94", "Zimbabwe", 16700000, 390757.0, 44000, 5},
    {"Carta95", "Moçambique", 35000000, 801590.0, 21000, 1},
    {"Carta96", "Zâmbia", 21300000, 752612.0, 27000, 1},
    {"Carta97", "Angola", 37000000, 1246700.0, 80000, 1},
    {"Carta98", "Madagascar", 31700000, 587041.0, 17000, 3},
    {"Carta99", "Camarões", 30000000, 475442.0, 51000, 3},
    {"Carta100", "Laos", 7700000, 236800.0, 19000, 3}
};

#endif
