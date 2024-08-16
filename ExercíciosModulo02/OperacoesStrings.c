#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    char nome[10];
    strcpy(nome, "Emanuel");
    setlocale(LC_ALL, "Portuguese");
    printf("Muito prazer %s.\n", nome);
    system("pause");
}
