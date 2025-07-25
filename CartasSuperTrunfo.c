#include <stdio.h>


int main(){

//Carta 1
char estado_1[2];
char codigo_1[4];
char cidade_1[33];
int populacao_1;
int area_1;
int pib_1;
int pontos_turisticos_1;
float densidade;
float rendaper;

printf("JOGO SUPERTRUNFO\n");
printf("VAMOS PREENCHER OS DADOS DA CARTA 1:\n");
printf("POR FAVOR PREENCHA OS DADOS A SEGUIR:\n");
printf("INFORMAR A SIGLA DO ESTADO COM UMA LETRA, CONFORME TABELA ABAIXO\n");
printf("A=AMAZONAS\nB=BAHIA\nC=CEARÁ\nD=RIO DE JANEIRO\nE=PARANÁ\nF=SANTA CATARINA\nG=ALAGOAS\n");
printf("QUAL ESTADO VOCÊ ESCOLHE?");
scanf("%s", &estado_1);

printf("INFORMAR O CÓDIGO DA CARTA, CONFORME TABELA ABAIXO\n");
printf("A01, B01 C01 OU D01\n");
printf("QUAL CÓDIGO DE CARTA VOCÊ ESCOLHE?");
scanf("%s", &codigo_1);

printf("QUAL NOME DE CIDADE VOCÊ ESCOLHE?");
scanf("%s", &cidade_1);

printf("QUAL A POPULAÇÃO DA CIDADE?");
scanf("%d", &populacao_1);

printf("QUAL A ÁREA DA CIDADE EM METROS2?");
scanf("%d", &area_1);

printf("QUAL O PIB - PRODUTO INTERNO BRUTO DO ESTADO?");
scanf("%d", &pib_1);

printf("QUAL O NÚMERO DE PONTOS TURÍSTICOS DA CIDADE?");
scanf("%d", &pontos_turisticos_1);

densidade = (float) populacao_1 / area_1;
rendaper = (float) pib_1 / populacao_1;


printf("CARTA 1\n");
printf("ESTADO: %s \n", estado_1);
printf("CÓDIGO: %s \n", codigo_1);
printf("CIDADE: %s \n", cidade_1);
printf("POPULAÇÃO: %d \n", populacao_1);
printf("ÁREA: %d \n", area_1);
printf("PIB: %d \n", pib_1);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", pontos_turisticos_1);
printf("A DENSIDADE É: %f \n", densidade);
printf("a renda per capita é: %f \n", rendaper);


printf("-------------------------------------------------------------------------\n");


//Carta 2
char estado_2[2];
char codigo_2[4];
char cidade_2[33];
int populacao_2;
int area_2;
int pib_2;
int pontos_turisticos_2;
float ladensidade;
float larendaper;


printf("VAMOS PREENCHER OS DADOS DA CARTA 2:\n");
printf("POR FAVOR PREENCHA OS DADOS A SEGUIR:\n");
printf("INFORMAR A SIGLA DO ESTADO COM UMA LETRA, CONFORME TABELA ABAIXO\n");
printf("A=AMAZONAS\nB=BAHIA\nC=CEARÁ\nD=RIO DE JANEIRO\nE=PARANÁ\nF=SANTA CATARINA\nG=ALAGOAS\n");
printf("QUAL ESTADO VOCÊ ESCOLHE?");
scanf("%s", &estado_2);
printf("INFORMAR O CÓDIGO DA CARTA, CONFORME TABELA ABAIXO\n");
printf("A01, B01 C01 OU D01\n");
printf("QUAL CÓDIGO DE CARTA VOCÊ ESCOLHE?");
scanf("%s", &codigo_2);

printf("QUAL NOME DE CIDADE VOCÊ ESCOLHE?");
scanf("%s", &cidade_2);

printf("QUAL A POPULAÇÃO DA CIDADE?");
scanf("%d", &populacao_2);

printf("QUAL A ÁREA DA CIDADE EM METROS2?");
scanf("%d", &area_2);

printf("QUAL O PIB - PRODUTO INTERNO BRUTO DO ESTADO?");
scanf("%d", &pib_2);

printf("QUAL O NÚMERO DE PONTOS TURÍSTICOS DA CIDADE?");
scanf("%d", &pontos_turisticos_2);

ladensidade = (float) populacao_1 / area_1;
larendaper = (float) pib_1 / populacao_1;


printf("CARTA 2\n");
printf("ESTADO: %s \n", estado_2);
printf("CÓDIGO: %s \n", codigo_2);
printf("CIDADE: %s \n", cidade_2);
printf("POPULAÇÃO: %d \n", populacao_2);
printf("ÁREA: %d \n", area_2);
printf("PIB: %d \n", pib_2);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", pontos_turisticos_2);
printf("A DENSIDADE É: %f \n", ladensidade);
printf("a renda per capita é: %f \n", larendaper);



return 0;

}
