#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome[20];
    printf("Qual é o seu nome? ");
    scanf("%s", &nome);
    printf("muito prazer em te conhecer %s.\n", nome);
    system("pause");
}
