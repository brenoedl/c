#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(0, "portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual o seu nome? ");
    gets(nome);
    fflush(stdin);
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    printf("Ol� %s voc� tem %i anos de idade, seu peso atual � de %.2fKg coreto?", nome, idade, peso);
}
