#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    char sexo;
    unsigned short int idade;
    float peso;
    printf("Qual o seu nome? ");
    gets(nome);
    printf("Qual o seu sexo [M / F] ? ");
    sexo = getchar();
    fflush(stdin);
    printf("Qual a sua idade? ");
    scanf("%hu", &idade);
    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    printf("Ol� %s voc� tem %hu anos de idade e seu sexo � %c e o peso � de %.2fKg\n", nome, idade, sexo, peso);
    system("pause");
}
