#include <stdio.h>

int main() {
    printf("DESAFIO SUPER TRUNFO DE PAÍSES.\n");

    // Data for cards
    char *codigos[] = {"A", "B"};
    char *nomes[] = {"Rio de Janeiro", "Salvador"};
    int populacoes[] = {6729894, 2500000}; // Corrected to integer values
    float areas[] = {120033, 693442};
    float pibs[] = {949301, 62954.0}; // Corrected to float values
    int pontos_turisticos[] = {58, 25};

    printf("Por favor, insira o código da sua carta (A ou B):\n");
    char codigo_selecionado;
    scanf(" %c", &codigo_selecionado);

    // Determine the index based on the selected code
    int index = (codigo_selecionado == 'A') ? 0 : 1;

    printf("Os dados da carta são: código: %s, nome: %s, população: %d, área: %.2f, PIB: %.2f, pontos turísticos: %d.\n",
           codigos[index], nomes[index], populacoes[index], areas[index], pibs[index], pontos_turisticos[index]);

    return 0;
}