#include  <stdio.h>

int main() {

//Dados Carta 1
char estado1 = 'A';
char codigo1[4] = "A01";
char cidade1[100] = "Belém";
int populacao1 = 1398531;
float area1 = 1.059;
float pib1 = 33.448;
int pontosturisticos1 = 30;

//Dados Carta 2
char estado2 = 'B';
char codigo2[4] = "B01";
char cidade2[100] = "João Pessoa";
int populacao2 = 833932;
float area2 = 211.5;
float pib2 = 20.766;
int pontosturisticos2 = 15;

//Ponteiros
char *codigo;
char *cidade;
int *populacao;
float *area;
float *pib;
int *pontosturisticos;
char *estado;

//Arrays de ponteiros
char *codigos[] = {codigo1, codigo2};
char *cidades[] = {cidade1, cidade2};
int *populacoes[] = {&populacao1, &populacao2};
float *areas[] = {&area1, &area2};
float *pibs[] = {&pib1, &pib2};
int *pontosturisticos_Lista[] = {&pontosturisticos1, &pontosturisticos2};
char *estados[] = {&estado1, &estado2};

//Entrada do usuário
char letra;
printf("Digite A ou B para ver os dados da carta: ");
scanf(" %c", &letra);

int indice = letra - 'A';

//Apontando ponteiros para a carta correta
estado = estados[indice];
codigo = codigos[indice];
cidade = cidades[indice];
populacao = populacoes[indice];
area = areas[indice];
pib = pibs[indice];
pontosturisticos = pontosturisticos_Lista[indice];

//Exibição ddos dados
printf("Dados da Carta \n");
printf("Estado: %c\n", *estado);
printf("Código: %s\n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %d\n", *populacao);
printf("Área: %.2f km²\n", *area);
printf("PIB: %.2f bilhões \n", *pib);
printf("Pontos Turísticos: %d\n", *pontosturisticos);


return 0;
}
