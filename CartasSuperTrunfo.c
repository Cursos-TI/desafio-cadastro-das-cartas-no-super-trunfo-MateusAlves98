#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, codigo1[4], Cidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, PIB1;

    char estado2, codigo2[4], Cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, PIB2;

    // Carta 1
    printf("Estado da carta 1 (A a H): ");
    scanf("%c", &estado1);

    printf("Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade da carta 1 (sem espaços): ");
    scanf("%s", Cidade1);

    printf("População da carta 1: ");
    scanf("%d", &populacao1);

    printf("Área da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("PIB da carta 1: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("Estado da carta 2 (A a H): ");
    scanf("%c", &estado2);

    printf("Código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade da carta 2 (sem espaços): ");
    scanf("%s", Cidade2);

    printf("População da carta 2: ");
    scanf("%d", &populacao2);

    printf("Área da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("PIB da carta 2: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %2.f km²\n", area1);
    printf("PIB: %2.f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %2.f km²\n", area2);
    printf("PIB: %2.f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);








    
    
    
    
    
    
    
    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
