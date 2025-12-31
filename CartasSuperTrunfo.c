#include <stdio.h>

int main() {
    // === Declaração das Variáveis ===
    // Definindo as variáveis para a Carta 1
    char estado1;
    char codigo1[20];       // Array de char para armazenar texto (string)
    char nomeCidade1[50];   // Array maior para nomes de cidades longos
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Definindo as variáveis para a Carta 2
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // === Entrada de Dados: Carta 1 ===
    printf("\n=== Digite os dados da Carta 1 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes do %c serve para limpar o buffer do teclado

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); // Strings (arrays) não precisam do & no scanf

    printf("Nome da Cidade: ");
    // O formato " %[^\n]" lê a linha inteira até o enter, permitindo espaços (ex: São Paulo)
    scanf(" %[^\n]", nomeCidade1); 

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km^2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // === Entrada de Dados: Carta 2 ===
    printf("\n=== Digite os dados da Carta 2 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km^2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // === Exibição dos Dados ===
    printf("\n\n=================================\n");
    printf("           DADOS CADASTRADOS       \n");
    printf("=================================\n");

    // Exibindo Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    // %.2f formata o float para mostrar apenas 2 casas decimais
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibindo Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}