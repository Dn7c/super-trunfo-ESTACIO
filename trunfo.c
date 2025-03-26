#include <stdio.h>

   int main(){

   char estado[20], codigodacarta[5], cidade[50];
   int populacao, pontos;
   float areakm, pib;

   // Solicitando as informações para a primeira carta
   printf("Informe os dados da primeira carta\n");
   printf("Estados (DE A a H): ");
   scanf("%s", estado);

   printf("codigo da carta (EX: A02): ");
   scanf("%s", codigodacarta);
   printf("Nome da Cidade: ");
   scanf("%s", cidade);
   
   printf("Numero da populaçao: ");
   scanf("%d", &populacao);
   printf("numero de pontos turisticos: ");
   scanf("%d", &pontos);
   printf("Area por Km: ");
   scanf("%f", &areakm);
   printf("BIP Por estado: ");
   scanf("%f", &pib);
   
   // Exibicao das cartas
   printf("\nCarta 1:\n");
   printf("Estado: %s\n", estado);
   printf("Código: %s\n", codigodacarta);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", areakm);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontos);



        return 0;
   }
