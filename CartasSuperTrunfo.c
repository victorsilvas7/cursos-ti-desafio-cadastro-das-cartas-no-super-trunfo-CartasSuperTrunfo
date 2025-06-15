#include <stdio.h>

// Desafio Super Trunfo

int main(){

    char estado1[50], estado2[50], codigocarta1[50],codigocarta2[50],
    cidade1[50],cidade2[50];

    int populaçao1, populaçao2, pontosturisticos1, pontosturisticos2, carta1,carta2;

    float area1, area2,pib1, pib2,densidade1, densidade2, pibpercapita1, pibpercapita2;

// Cadastramento da carta1 via usuário

printf("Digite o numero da carta a ser cadastrada: ");
scanf( "%d", &carta1);

printf("Digite o Estado:");
scanf("%s", &estado1);

printf("Digite o Código da carta: ");
scanf("%s", &codigocarta1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("Digite a população desta cidade: ");
scanf("%d", &populaçao1);


printf("Digite a área da cidade:");
scanf("%f", &area1);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turiscos: ");
scanf("%d", &pontosturisticos1);

//Cadastramento da carta2 via usuário
printf("\n");
printf("Digite o numero da carta a ser cadastrada: ");
scanf( "%d", &carta2);

printf("Digite o Estado:");
scanf("%s", &estado2);

printf("Digite o Código da carta: ");
scanf("%s", &codigocarta2);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

printf("Digite a população desta cidade: ");
scanf("%d", &populaçao2);


printf("Digite a área da cidade:");
scanf("%f", &area2);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turiscos: ");
scanf("%d", &pontosturisticos2);

densidade1 = populaçao1 / area1;
densidade2 = populaçao2 / area2;

pibpercapita1= pib1 / populaçao1;
pibpercapita2= pib2 / populaçao2;

//Print da carta1 cadastrada
printf("\n");
printf("Carta: %d \n",carta1);
printf("ESTADO: %s \n",estado1);
printf("Código da carta: %s \n",codigocarta1);
printf("Nome da cidade: %s \n",cidade1);
printf("População: %d \n",populaçao1);
printf("área: %f \n",area1);
printf("PIB: %f \n",pib1);
printf("Número de pontos turiscos: %d \n",pontosturisticos1);
printf("Densidade Populacional: %f \n",densidade1);
printf("PIB per capita: %f \n",pibpercapita1);

//Print da carta2

printf("\n");
printf("Carta: %d \n",carta2);
printf("ESTADO: %s \n",estado2);
printf("Código da carta: %s \n",codigocarta2);
printf("Nome da cidade: %s \n",cidade2);
printf("População: %d \n",populaçao2);
printf("área: %f \n",area2);
printf("PIB: %f \n",pib2);
printf("Número de pontos turiscos: %d \n",pontosturisticos2);
printf("Densidade Populacional: %f \n",densidade2);
printf("PIB per capita: %f \n",pibpercapita2);

return 0;

}
