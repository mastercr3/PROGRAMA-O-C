// DESAFIO NIVEL BASICO SUPER TRUNFO
#include <stdio.h>
#include <stdlib.h> 

int main (){

char estado1;
char card1 [20];
char cid1 [20];
int popu1;
float area1;
float pib1;
int turis1;

char estado2;
char card2 [20];
char cid2 [20];
int popu2;
float area2;
float pib2;
int turis2;



    printf("CARTA 1: \n\n");

    printf("atribua uma letra ao estado:\n");
    scanf("%s", &estado1);

    printf("Atribua um codigo para a carta:\n");
    scanf("%s", card1);

    printf("Informe o nome da cidade:\n");
    scanf("%s", cid1);

    printf("Informe a populacao:\n");
    scanf("%d", &popu1);

    printf("Informe a area em km²:\n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &turis1);


printf ("CARTA 2: \n\n");

    printf("atribua uma letra ao estado:\n");
    scanf("%s", &estado2);

    printf("Atribua um codigo para a carta:\n");
    scanf("%s", card2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", cid2);

    printf("Informe a populacao:\n");
    scanf("%d", &popu2);

    printf("Informe a area em km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &turis2);




printf ("CARTA 1: \n\n");
printf ("Estado: %c\n", estado1);  
printf ("Codigo: %s\n", card1);
printf ("Cidade: %s\n", cid1);
printf ("Populacao: %d\n", popu1);
printf ("Total da area: %.2f km²\n", area1);
printf ("PIB: %.2f bilhoes de reais.\n", pib1);
printf ("Numero de pontos turistiscos: %d\n", turis1);

printf ("CARTA 2: \n\n");
printf ("Estado: %c\n", estado2);
printf ("Codigo: %s\n", card2);
printf ("Cidade: %s\n", cid2);
printf ("Populacao: %d\n", popu2);
printf ("Total da area: %.2f km²\n", area2);
printf ("PIB: %.2f bilhoes de reais.\n", pib2);
printf ("Numero de pontos turistiscos: %d\n", turis2);

    



return 0;

}