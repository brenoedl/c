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
    printf("Olá %s você tem %hu anos de idade e seu sexo é %c e o peso é de %.2fKg\n", nome, idade, sexo, peso);
    system("pause");
}
