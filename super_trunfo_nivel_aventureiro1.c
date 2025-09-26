#include <stdio.h>
#include <string.h>
# include <stdlib.h>
# include <time.h>

//Super Trunfo Aventureiro, comparando dois paises.
//Definição de variáveis.

int main(){
//carta 1.
    char pais1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densipop1;
    int pibpercapita1;
//carta 2.
    char pais2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densipop2;
    int pibpercapita2;
    int comparador;
  


    printf ("#### SUPER TRUNFO ####\n");
    printf ("Antes de começãr, você irá cadastrar duas cartas.\n");
    printf ("Cada carta representa um país, e você irá comparar os atributos de cada país.\n");
    printf ("O país que tiver o maior valor em cada atributo, ganha a rodada. A única exceção é na Densidade Demográfica, ganha o menor valor!\n");
    printf ("Vamos começar!\n\n");

//Código para registro da carta 1.
    printf ("Registro da Carta 1:\n");

    printf ("Informe um País. ");
    scanf (" %[^\n]", pais1);
    fflush (stdin);

    printf ("Qual a população do país escolhido - %s? ", pais1);
    (scanf ("%d", &populacao1) == 1);
    fflush (stdin);

    printf ("Qual a área em km² do país que você escolheu - %s? ", pais1);
    (scanf ("%f", &area1) == 1);
    fflush (stdin);

    printf ("Qual o PIB do país escolhido - %s? ", pais1);
    (scanf ("%f", &pib1) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem no país que você escolheu - %s? ", pais1);
    scanf ("%d", &pontos1);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da primeira carta.    
    densipop1 = populacao1 / area1;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita1 = pib1 * 1000000000 / populacao1;

//Código para registro da carta 2.

    printf ("Registro da Carta 2:\n");

    printf ("Informe um País. ");
    scanf (" %[^\n]", pais2);
    fflush (stdin);

    printf ("Qual a população do país escolhido - %s? ", pais2);
    (scanf ("%d", &populacao2) == 1);
    fflush (stdin);

    printf ("Qual a área em km² do país que você escolheu - %s? ", pais2);
    (scanf ("%f", &area2) == 1);
    fflush (stdin);

    printf ("Qual o PIB do país escolhido - %s? ", pais2);
    (scanf ("%f", &pib2) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem no país que você escolheu - %s? ", pais2);
    scanf ("%d", &pontos2);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da segunda carta.
    densipop2 = populacao2 / area2;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita2 = pib2 * 1000000000 / populacao2;


//Escolher um atributo para comparar as cartas.
    printf ("Hora de escolher qual atributo você quer comparar!\n");
    printf ("Você pode escolher entre os seguintes atributos:\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de pontos turísticos\n");
    printf ("5 - Densidade populacional\n");
    printf ("6 - PIB per capita\n\n");
    printf ("Escolha de 1 a 6 qual atributo você quer comparar: \n");
    scanf ("%d", &comparador);

    switch (comparador)
    {
    case 1: //Comparando população.
        if (populacao1 > populacao2){
            printf("Carta 1, População - %s: %d\nCarta 2, População - %s: %d.\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, populacao1, pais2, populacao2, pais1);
    } else {
        if (populacao1 < populacao2){
            printf("Carta 1, População - %s: %d\nCarta 2, População - %s: %d.\nCarta 2 GANHOU (%s). Parabéns!\n", pais1, populacao1, pais2, populacao2, pais2);
        } else {
            printf("Carta 1, População - %s: %d\nCarta 2, População - %s: %d.\nEmpataram!\n \n", pais1, populacao1, pais2, populacao2);
        }
    }
        break;
    case 2: //Comparando área.
        if (area1 > area2){
            printf("Carta 1, Área - %s: %.2fkm²\nCarta 2, Área - %s: %.2fkm².\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, area1, pais2, area2, pais1);
    } else {
        if (area1 < area2){
            printf("Carta 1, Área - %s: %.fkm²\nCarta 2, Área - %s: %.2fkm².\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", pais1, area1, pais2, area2, pais2);
        } else {
            printf("Carta 1, Área - %s: %.2fkm²\nCarta 2, Área - %s: %.2fkm².\nEmpataram.\n \n", pais1, area1, pais2, area2);
        }
    }
        break;
    case 3: //Comparando PIB.
        if (pib1 > pib2){
            printf("Carta 1, PIB - %s: %.2f\nCarta 2, PIB - %s: %.2f.\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, pib1, pais2, pib2, pais1);
    } else {
        if (pib1 < pib2){
            printf("Carta 1, PIB - %s: %.2f\nCarta 2, PIB - %s: %.2f.\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", pais1, pib1, pais2, pib2, pais2);
        } else {
            printf("Carta 1, PIB - %s: %.2f\nCarta 2, PIB - %s: %.2f.\nEmpataram.\n \n", pais1, pib1, pais2, pib2);
        }
    }
        break;
    case 4: //Comparando pontos turísticos.
        if (pontos1 > pontos2){             
            printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, pontos1, pais2, pontos2, pais1);
    } else {
        if (pontos1 < pontos2){
            printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nCarta B GANHOU (%s). ganhou! Parabéns!\n", pais1, pontos1, pais2, pontos2, pais2);
        } else {
            printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nEmpataram.\n \n", pais1, pontos1, pais2, pontos2);
        }
    }
        break;
    case 5: //Comparando densidade populacional.
        if (densipop1 > densipop2){
            printf("Carta 1, Densidsde Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nCarta 2 GANHOU (%s). Parabéns!\n", pais1, densipop1, pais2, densipop2, pais2);
    } else {
        if (densipop1 < densipop2){
            printf("Carta 1, Densidade Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, densipop1, pais2, densipop2, pais1);
        } else {
            printf("Carta 1, Densidade Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nEmpataram!\n \n", pais1, densipop1, pais2, densipop2);
        }
    }
        break;
    case 6: //Comparando PIB per capita.
        if (pibpercapita1 > pibpercapita2){
            printf("Carta 1, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nCarta 1 GANHOU (%s). Parabéns!\n", pais1, pibpercapita1, pais2, pibpercapita2, pais1);
    } else {
        if (pibpercapita1 < pibpercapita2){
            printf("Carta A, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", pais1, pibpercapita1, pais2, pibpercapita2, pais2);
        } else {
            printf("Carta 1, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nEmpataram\n", pais1, pibpercapita1, pais2, pibpercapita2);
        }
    }
        break;
    default: //Caso o usuário digite um número inválido.
        printf("Opção inválida, tente novamente.\n");
        break;
    }

}