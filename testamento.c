#include <stdio.h>

int main(){
int idade;
int matricula;
double altura;
char nome[50];

printf("Digite sua idade\n");
scanf("%d , &idade");

printf("Digite sua altura\n");
scanf("%f , &altura");

printf("Digite seu nome\n");
scanf("%s , &nome");

printf("Digite sua matricula");
scanf("%d , &matricula");

pintf("Nome do aluno: %s - matricula: %d , nome, matricula");
printf("Idade: %d - Altura: %f , idade, altura");


return 0;
}