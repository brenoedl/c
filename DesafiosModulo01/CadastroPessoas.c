#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    char nome[30];
    unsigned short int idade;
    float peso;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual � seu nome? ");
    gets(nome);
    fflush(stdin);
    printf("Quantos anos voc� tem? ");
    scanf("%hu", &idade);
    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    printf("---------<<< PROCESSANDO >>>---------\n");
    printf("Muito prazeer, %s. Voc� tem %hu ano(s) e pesa %5.2fKg, correto?\n", nome, idade, peso);
    system("pause");
}
