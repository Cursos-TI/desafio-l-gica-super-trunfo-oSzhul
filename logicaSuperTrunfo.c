#include <stdio.h>

// Desafio Cadastro Super Trunfo - Países
// Adicionado estrutura de repetição aprendido em outra aula para otimizar a repetição da segunda carta

//Estrutura da carta
struct Carta {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    struct Carta cartas[2];
    
    printf("\n --- Seja Bem vindo ao jogo Super Trunfo de Cidades! --- \n");

    // --- Cadastro das Cartas ---
    for (int i = 0; i < 2; i++) {
        printf("\n --- Digite o código da carta (Ex: A01, A02...). --- \n");
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        
        printf("Digite o código da Cidade: ");
        scanf("%s", cartas[i].codigo);

        while (getchar() != '\n'); 

        printf("Digite o nome da Cidade: ");
        scanf("%[^\n]", cartas[i].nome); 

        printf("Digite o número da população: ");
        scanf("%d", &cartas[i].populacao);

        printf("Digite a área em km²: ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB (em Reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    printf("\n\n========================================\n");
    printf("  EXIBINDO AS 2 CARTAS CADASTRADAS");
    printf("\n========================================\n");

    // --- Dados da Carta Cadastrada ---
    for (int i = 0; i < 2; i++) {
        printf("\n------------------------------------\n");
        printf("      CARTA SUPER TRUNFO %d\n", i + 1);
        printf("------------------------------------\n");
        printf("Código: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nome);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f \n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("------------------------------------\n");
    }

    // --- Comparação da Carta e do resultado ---

    printf("\n\n========================================\n");
    printf("        Comparando as Cartas.");
    printf("\n========================================\n\n");

    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;

    // Comparação de população
    printf("--- Disputa por POPULAÇÃO ---\n");
    if (cartas[0].populacao > cartas[1].populacao) {
        printf("Vencedor: %s, com %d habitantes.\n", cartas[0].nome, cartas[0].populacao);
        vitoriasCarta1++;
    } else if (cartas[1].populacao > cartas[0].populacao) {
        printf("Vencedor: %s, com %d habitantes.\n", cartas[1].nome, cartas[1].populacao);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cidades têm %d habitantes.\n", cartas[0].populacao);
    }

    // Comparação de Área:
    printf("\n--- Disputa por ÁREA ---\n");
    if (cartas[0].area > cartas[1].area) {
        printf("Vencedor: %s, com %.2f km².\n", cartas[0].nome, cartas[0].area);
        vitoriasCarta1++;
    } else if (cartas[1].area > cartas[0].area) {
        printf("Vencedor: %s, com %.2f km².\n", cartas[1].nome, cartas[1].area);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cidades têm %.2f km².\n", cartas[0].area);
    }

    // Comparação de PIB:
    printf("\n--- Disputa por PIB ---\n");
    if (cartas[0].pib > cartas[1].pib) {
        printf("Vencedor: %s, com PIB de R$ %.2f.\n", cartas[0].nome, cartas[0].pib);
        vitoriasCarta1++;
    } else if (cartas[1].pib > cartas[0].pib) {
        printf("Vencedor: %s, com PIB de R$ %.2f.\n", cartas[1].nome, cartas[1].pib);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cidades têm PIB de R$ %.2f.\n", cartas[0].pib);
    }

    // Comparação de Pontos Turísticos:
    printf("\n--- Disputa por PONTOS TURÍSTICOS ---\n");
    if (cartas[0].pontosTuristicos > cartas[1].pontosTuristicos) {
        printf("Vencedor: %s, com %d pontos turísticos.\n", cartas[0].nome, cartas[0].pontosTuristicos);
        vitoriasCarta1++;
    } else if (cartas[1].pontosTuristicos > cartas[0].pontosTuristicos) {
        printf("Vencedor: %s, com %d pontos turísticos.\n", cartas[1].nome, cartas[1].pontosTuristicos);
        vitoriasCarta2++;
    } else {
        printf("Empate! Ambas as cidades têm %d pontos turísticos.\n", cartas[0].pontosTuristicos);
    }

    // Resultado final

    printf("\n\n========================================\n");
    printf("         RESULTADO FINAL");
    printf("\n========================================\n\n");

    printf("Placar: %s (%d vitórias) X %s (%d vitórias)\n\n", cartas[0].nome, vitoriasCarta1, cartas[1].nome, vitoriasCarta2);

    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("A grande vencedora é: %s!\n", cartas[0].nome);
    } else if (vitoriasCarta2 > vitoriasCarta1) {
        printf("A grande vencedora é: %s!\n", cartas[1].nome);
    } else {
        printf("O jogo terminou em EMPATE!\n");
    }
    
    printf("\nFim de jogo!\n");

    return 0;
}
