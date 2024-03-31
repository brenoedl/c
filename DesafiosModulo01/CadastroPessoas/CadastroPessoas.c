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
    printf("%s qual a sua idade? ", nome);
    scanf("%i", &idade);
    printf("%s qual o seu peso? ", nome);
    scanf("%f", &peso);
    printf("Olá %s você tem %i anos de idade, seu peso atual é de %.2fKg coreto?", nome, idade, peso);
}
