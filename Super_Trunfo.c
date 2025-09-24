#include <stdio.h>

int main(){

//variaveis da primeira carta
char estado1[3];
char codcarta1[3];
char cidade1[50];
int população1;
float area1;
float pib1;
int pontost1;
float densidade1;
float pibpc1;

//variaveis da segunda carta
char estado2[3];
char codcarta2[3];
char cidade2[50];
int população2;
float area2;
float pib2;
int pontost2;
float densidade2;
float pibpc2;

//inserção dos dados da primeira carta
printf("Vamos começar, todos os dados que irá informar a seguir serão da primeira carta e devem se tratar da mesma cidade.\n\n");

printf("Informe uma letra de 'A' a 'H' representando um dos oito estados para primeira carta:");
scanf(" %s", estado1);

printf("Informe um número de 01 a 04 para o código da primeira carta:");
scanf("%s", &codcarta1);

printf("Informe o nome da cidade:");
scanf("%s", &cidade1);

printf("Informe o número de habitantes da cidade:");
scanf(" %d", &população1);

printf("Informe a área da cidade em Km² da cidade:");
scanf(" %f", &area1);

printf("Informe o Produto Interno Bruto da cidade:");
scanf(" %f", &pib1);

printf("Informe a quantidade de pontos turísticos na cidade:");
scanf(" %d", &pontost1);

//inserção dos dados da segunda carta
printf("\n");
printf("Vamos continuar, agora todos os dados que irá informar a seguir serão da segunda carta e devem se tratar da mesma cidade.\n\n");

printf("Informe uma letra de 'A' a 'H' representando um dos oito estados para segunda carta:");
scanf(" %s", &estado2);

printf("Informe um número de 01 a 04 para o código da segunda carta:");
scanf("%s", &codcarta2);

printf("Informe o nome da cidade:");
scanf("%s", &cidade2);

printf("Informe o número de habitantes da cidade:");
scanf(" %d", &população2);

printf("Informe a área da cidade em Km² da cidade:");
scanf(" %f", &area2);

printf("Informe o Produto Interno Bruto da cidade:");
scanf(" %f", &pib2);

printf("Informe a quantidade de pontos turísticos na cidade:");
scanf(" %d", &pontost2);
printf("\n");

// Calculo de Densidade e Pib per capta

densidade1 = (float)(população1 / area1);
pibpc1 = (float)(pib1 / população1);
densidade2 = (float)(população2 / area2);
pibpc2 = (float)(pib2 / população2);


//demonstração da carta 1 

printf("Carta 1\n");
printf("Estado:%s\n", estado1);
printf("Código:%s\n", codcarta1);
printf("Nome da Cidade:%s\n", cidade1);
printf("População: %d\n", população1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontost1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpc1);

//demonstração da carta 2 

printf("\n Carta 2\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codcarta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontost2);
printf("Densidade Populacional: %.2f\ hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpc2);

//Comparação de população
if (população1 > população2)
{printf("Carta 1 venceu!!! Sua quantidade de habitantes de %d é maior do que a Carta 2\n", população1);
} else {
    printf("Carta 2 venceu!!! Sua quantidade de habitantes de %d é maior do que a Carta 1\n", população2);
}



return 0;

}