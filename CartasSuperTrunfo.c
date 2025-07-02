#include <stdio.h>

int main() {
    char estado1, codigo1[4], Cidade1[30];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, PIB1, densidade1, percapta1, superPoder1;

    char estado2, codigo2[4], Cidade2[30];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, PIB2, densidade2, percapta2, superPoder2;

    // Carta 1
    printf("Estado da carta 1 (A a H): ");
    scanf(" %c", &estado1); //Colocar espaço antes do %c para que eliminar o espaço que fica no buffer após usuario dar enter

    printf("Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade da carta 1 (sem espaços): ");
    scanf("%s", Cidade1);

    printf("População da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Área da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("PIB da carta 1: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nEstado da carta 2 (A a H): "); //Colocar espaço antes do %c para que eliminar o espaço que fica no buffer após usuario dar enter
    scanf(" %c", &estado2);

    printf("Código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade da carta 2 (sem espaços): ");
    scanf("%s", Cidade2);

    printf("População da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Área da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("PIB da carta 2: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapta1 = (PIB1 * 1000000000) / populacao1;//Precisei transformar o pib em bilhoes, pq ele está lendo como decimal devido ao %.2f
    percapta2 = (PIB2 * 1000000000) / populacao2;//Para sair conforme formatação desejada, precisei ajustar :)

    superPoder1 = (float)populacao1 + area1 + PIB1 + pontosTuristicos1 + percapta1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + PIB2 + pontosTuristicos2 + percapta2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapta1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações com resultado dinâmico
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2 ? 1 : 0); // menor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", percapta1 > percapta2 ? 1 : 2, percapta1 > percapta2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);

    
    printf("\n***Resultado das comparações (Atributo: População)***\n");
    printf("\nCarta 1: %s, população: %lu \n", Cidade1, populacao1);
    printf("Carta 2: %s, população: %lu \n", Cidade2, populacao2);

    if(populacao1 > populacao2){
        printf("A carta 1 (%s) ganhou!!! \n", Cidade1);
    }else{
        printf("A Carta 2 (%s) ganhou!!! \n", Cidade2);
    }

    
    
    
    return 0;
}