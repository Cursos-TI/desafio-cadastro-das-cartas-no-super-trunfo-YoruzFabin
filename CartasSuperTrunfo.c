#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Carta 1
    char estadoA = 'A';
    char codigoA[] = "A01";
    char cidadeA[20] = "Rio de Janeiro";
    unsigned long populacaoA = 6211223;
    int pontos_turisticosA = 1000;
    double pibA = 941000000000;
    float areaA = 1200.0;

    // Carta 2
    char estadoB = 'C';
    char codigoB[] = "C01";
    char cidadeB[20] = "Curitiba";
    unsigned long populacaoB = 11004000;
    int pontos_turisticosB = 300;
    double pibB = 210000000000;
    float areaB = 199315.0;

    // Cálculos carta 1
    float densidadeA = populacaoA / areaA;
    float pib_per_capitaA = pibA / populacaoA;
    float inverso_densidadeA = 1.0 / densidadeA;
    float super_poderA = populacaoA + areaA + pibA + pontos_turisticosA + pib_per_capitaA + inverso_densidadeA;

    // Cálculos carta 2
    float densidadeB = populacaoB / areaB;
    float pib_per_capitaB = pibB / populacaoB;
    float inverso_densidadeB = 1.0 / densidadeB;
    float super_poderB = populacaoB + areaB + pibB + pontos_turisticosB + pib_per_capitaB + inverso_densidadeB;

    // Comparações e impressão
    printf("Comparacao de Cartas:\n");

    // População
    int resultado = (populacaoA > populacaoB) ? 1 : 0;
    printf("Populacao: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Área
    resultado = (areaA > areaB) ? 1 : 0;
    printf("Area: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB
    resultado = (pibA > pibB) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Pontos turísticos
    resultado = (pontos_turisticosA > pontos_turisticosB) ? 1 : 0;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Densidade populacional (menor vence)
    resultado = (densidadeA < densidadeB) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB per capita
    resultado = (pib_per_capitaA > pib_per_capitaB) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Super Poder
    resultado = (super_poderA > super_poderB) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
