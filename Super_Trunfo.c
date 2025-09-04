#include <stdio.h>

int main(){

//variaveis da primeira carta
char estado1[1];
int codcarta1[2];
char cidade1[20];
int população1;
float area1;
float pib1;
int pontost1;

//variaveis da segunda carta
char estado2[1];
int codcarta2[2];
char cidade2[20];
int população2;
float area2;
float pib2;
int pontost2;

//inserção dos dados da primeira carta
printf("Vamos começar, todos os dados que irá informar a seguir serão da primeira carta e devem se tratar da mesma cidade.\n\n");

printf("Informe uma letra de 'A' a 'H' representando um dos oito estados para primeira carta\n");
scanf(" %s", &estado1);

printf("Informe um número de 01 a 04 para o código da primeira carta\n");
scanf(" %d", &codcarta1);

printf("Informe o nome da cidade.\n");
scanf(" %s", &cidade1);

printf("Informe o número de habitantes da cidade.\n");
scanf(" %d", &população1);

printf("Informe a área da cidade em quilômetros quadrados da cidade\n");
scanf(" %f", &area1);

printf("Informe o Produto Interno Bruto da cidade.\n");
scanf(" %f", &pib1);

printf("Informe a quantidade de pontos turísticos na cidade.\n");
scanf(" %d", &pontost1);
\n
//inserção dos dados da segunda carta
printf("Vamos continuar, agora todos os dados que irá informar a seguir serão da segunda carta e devem se tratar da mesma cidade.\n\n");

printf("Informe uma letra de 'A' a 'H' representando um dos oito estados para segunda carta\n");
scanf(" %s", &estado2);

printf("Informe um número de 01 a 04 para o código da segunda carta\n");
scanf(" %d", &codcarta2);

printf("Informe o nome da cidade.\n");
scanf(" %s", &cidade2);

printf("Informe o número de habitantes da cidade.\n");
scanf(" %d", &população2);

printf("Informe a área da cidade em quilômetros quadrados da cidade\n");
scanf(" %f", &area2);

printf("Informe o Produto Interno Bruto da cidade.\n");
scanf(" %f", &pib2);

printf("Informe a quantidade de pontos turísticos na cidade.\n\n");
scanf(" %d", &pontost2);

//demonstração da carta 1 

printf("Carta 1\n");
printf("Estado: %s\n", estado1);
printf("Código: %d\n", estado1, codcarta1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", população1);
printf("Área: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Pontos turísticos: %d\n\n", pontost1);

//demonstração da carta 2 

printf("Carta 2\n");
printf("Estado: %s\n", estado2);
printf("Estado %s | Código: %d\n", estado2, codcarta2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Pontos turísticos: %d\n\n", pontost2);

}