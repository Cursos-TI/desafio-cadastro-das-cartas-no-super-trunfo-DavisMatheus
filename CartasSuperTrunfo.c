#include <stdio.h>
#include <string.h>

int main (){
    int populacao1, pturisticos1;
    float area1,pib1;
    char estado1, codigocarta1[5], cidade1[25];
    int populacao2, pturisticos2;
    float area2,pib2;
    char estado2, codigocarta2[5], cidade2[25];

    // incersão de dados da carta 1
    printf("Informe os dados a seguir da Carta 1:\n");
    printf("Estado da Carta 1:\n");
    
    // estado1= getchar(); para coletar de forma simples o primeiro digito
    estado1= getchar();

    printf("Código da Carta 1:\n");
    scanf("%s", codigocarta1);

    //Getchar para limpar o espaço e não pular a função
    getchar();

    //fgets no lugar de printf para alocar o nome completo da cidade
    printf("Nome da Cidade da Carta 1:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População da Carta 1:\n");
    scanf("%d", &populacao1);

    printf("Área km² da Carta 1:\n");
    scanf("%f", &area1);

    printf("PIB da Carta 1:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos da Carta 1:\n");
    scanf("%d", &pturisticos1);

    // incerção de dados da carta 2
    //getchar com a mesma logica(limpar dados) para a carta 2
    getchar();

    printf("Informe os dados a seguir da Carta 2:\n");
    printf("Estado da Carta 2:\n");
    estado2= getchar();

    printf("Código da Carta 2:\n");
    scanf("%s", codigocarta2);

    getchar();

    printf("Nome da Cidade da Carta 2:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Área km² da Carta 2:\n");
    scanf("%f", &area2);

    printf("PIB da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos da Carta 2:\n");
    scanf("%d", &pturisticos2);

    // Impressão dos dados das cartas1 
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    // Impressão dos dados das cartas2 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    return 0;
}