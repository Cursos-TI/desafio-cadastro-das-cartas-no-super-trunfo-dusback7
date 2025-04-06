#include <stdio.h>

   int main(){

    ////// carta a

    char estadoA[50] = "Rio de Janeiro";
    char códigoA [5] = "A01";
    char nomeA[50] = "Rio de Janeiro";
    float populacaoA = 16055174;
    float areaA = 1.200;
    double pibA = 300.50;
    int pontos_turísticosA = 58;


    ////// carta b

    char estadoB[50] = "São Paulo";
    char códigoB [5] = "A02";
    char nomeB[50] = "São Paulo";
    float populacaoB = 11451999;
    float areaB = 1.521202;
    double pibB = 2.719751;
    int pontos_turísticosB = 30;

    ///////// exibição dos dados das cartas /////////

    printf("Estado 1: %s\n", estadoA);
    printf("Código 1: %s\n", códigoA);
    printf("Nome 1: %s\n", nomeA);
    printf("População 1: %.2f\n", populacaoA);
    printf("Área 1: %.2f\n", areaA);
    printf("PIB 1: %.2f\n", pibA);
    printf("Pontos turisticos 1: %d\n", pontos_turísticosA);

    printf("Estado 2: %s\n", estadoB);    
    printf("Código 2: %s\n", códigoB);
    printf("Nome 2: %s\n", nomeB);    
    printf("População 2: %.2f\n", populacaoB);
    printf("Área 2: %.2f\n", areaB);
    printf("PIB 2: %.2f\n", pibB);
    printf("Pontos turisticos 2: %d\n", pontos_turísticosB);

    return 0;

   }
