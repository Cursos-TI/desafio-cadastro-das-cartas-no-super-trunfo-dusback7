#include <stdio.h>

// Cadastro das cartas

// Carta A
char estado_A = 'A';
char codigo_A[4] = "A01";
char nome_da_cidade_A[30] = "RIO DE JANEIRO";
int populacao_A = 6748000;
float area_A = 1200.25;
float PIB_A = 300.50;
int pontos_turisticos_A = 30;

// Carta B
char estado_B = 'B';
char codigo_B[4] = "B01";
char nome_da_cidade_B[20] = "SÃO PAULO";
int populacao_B = 12325000;
float area_B = 1521.11;
float PIB_B = 699.28;
int pontos_turisticos_B = 50;

// Programa e exibição das cartas
int main() {
    printf("Super Trunfo de Cidades\n\n");
    printf("O jogo contém duas cartas (A01 & B01)\n\n");

    // Exibindo a carta A
    printf("CARTA A:\n");
    printf("Código da cidade: %s\n", codigo_A);
    printf("Nome da cidade: %s\n", nome_da_cidade_A);
    printf("População: %d\n", populacao_A);
    printf("Área: %.2f km²\n", area_A);
    printf("PIB: %.2f bilhões\n", PIB_A);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos_A);

    // Exibindo a carta B
    printf("CARTA B:\n");
    printf("Código da cidade: %s\n", codigo_B);
    printf("Nome da cidade: %s\n", nome_da_cidade_B);
    printf("População: %d\n", populacao_B);
    printf("Área: %.2f km²\n", area_B);
    printf("PIB: %.2f bilhões\n", PIB_B);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B);

    return 0;
}