#include <stdio.h>

// ==> JOGO SUPER TRUNFO - CADASTRO DAS CARTAS 1 E 2 <==

int main(){
// ==> ESTRUTURA DA CARTA 1 <==

// Atributos carta 1:
char estado_1; // Uma letra que represente o estado de 'A' à 'H'.
char codigo_carta_1[10]; // Letra do estado + um numero de 01 a 04.
char nome_cidade_1[50]; // Nome da Cidade.
int populacao_1; // População cidade 1.
int pontos_turisticos_1; // Quantidade de pontos turísticos.
float area_1, PIB_1; // O tamanho da área e o valor do PIB da cidade.
float densidadepopulacional_1, PIBpercapita_1; // densidade populacional e renda per Capita da cidade.


// Usuário digitará os dados da carta 1:
printf("\n");
printf("==> CADASTRO DA CARTA 1 <==\n");  // Título 1
printf("\n");

printf("Digite a letra inicial do estado [A à H]: ");
scanf(" %c", &estado_1);

printf("Digite o codigo da carta (Estado + [01 à 04]): ");
scanf("%s", &codigo_carta_1);

printf("Digite o nome da cidade: ");
scanf("%s", &nome_cidade_1);

printf("Digite a população: ");
scanf("%d", &populacao_1);

printf("Digite o tamanho da área em km²: ");
scanf("%f", &area_1);

printf("Digite o valor do PIB: ");
scanf("%f", &PIB_1);

printf("Digite o numero de pontos turísticos: ");
scanf("%d", &pontos_turisticos_1);

densidadepopulacional_1 = (float) (populacao_1 / area_1);// Cálculo densidade Populacional.

PIBpercapita_1 = (float) (PIB_1 / populacao_1);// Calculo PIB per Capita

// ==> ESTRUTURA DA CARTA 2 <==

// Atributos carta 2:
char estado_2; 
char codigo_carta_2[10];
char nome_cidade_2[50];
int populacao_2;
int pontos_turisticos_2; 
float area_2, PIB_2;
float densidadepopulacional_2, PIBpercapita_2;


// Usuário digitará os dados da carta 2:
printf("\n");
printf("==> CADASTRO DA CARTA 2 <==\n");  // Título 2
printf("\n");

printf("Digite a letra inicial do estado [A à H]: ");
scanf(" %c", &estado_2);

printf("Digite o codigo da carta (Estado + [01 à 04]): ");
scanf("%s", &codigo_carta_2);

printf("Digite o nome da cidade: ");
scanf("%s", &nome_cidade_2);

printf("Digite a população: ");
scanf("%d", &populacao_2);

printf("Digite o tamanho da área em km²: ");
scanf("%f", &area_2);

printf("Digite o valor do PIB: ");
scanf("%f", &PIB_2);

printf("Digite o numero de pontos turísticos: ");
scanf("%d", &pontos_turisticos_2);

densidadepopulacional_2 = (float) (populacao_2 / area_2); //Cálculo densidade Populacional.

PIBpercapita_2 = (float) (PIB_2 / populacao_2); //Cálculo PIB per Capita.

// ==> DADOS DA CARTA 1 <== (Que aparecerão no Terminal)
printf("\n");
printf("### CARTA 1 ###\n"); // Título
printf("\n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_carta_1);
printf("Nome da Cidade: %s\n", nome_cidade_1);
printf("População: %d\n", populacao_1);
printf("Área: %.2f m²\n", area_1);
printf("PIB: R$%.2f\n", PIB_1);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
printf("Densidade Populacional: %.2f\n", densidadepopulacional_1);
printf("PIB per Capita: R$%.2f\n", PIBpercapita_1);


// ==> DADOS DA CARTA 2 <== (Que aparecerão no Terminal)
printf("\n");
printf("### CARTA 2 ###\n"); // Título
printf("\n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_carta_2);
printf("Nome da Cidade: %s\n", nome_cidade_2);
printf("População: %d\n", populacao_2);
printf("Área: %.2f m²\n", area_2);
printf("PIB: R$%.2f\n", PIB_2);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
printf("Densidade Populacional: %.2f\n", densidadepopulacional_2);
printf("PIB per Capita: R$%.2f\n", PIBpercapita_2);


return 0;

}