#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    setlocale(LC_ALL, "Portuguese");
    printf("Cadastrando a primeira pessoa:\n");
    printf("---------------------------------\n");
    printf("Nome: ");
    gets(nome1);
    fflush(stdin);
    printf("Sexo: [M/F]  ");
    sexo1 = getchar();
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Cadastrando a segunda pessoa:\n");
    printf("---------------------------------\n");
    printf("Nome: ");
    gets(nome2);
    fflush(stdin);
    printf("Sexo: [M/F] ");
    sexo2 = getchar();
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("Cadastrando a terceira pessoa:\n");
    printf("---------------------------------\n");
    printf("Nome: ");
    gets(nome3);
    fflush(stdin);
    printf("Sexo: [M/F] ");
    sexo3 = getchar();
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota3);
    printf("\r\t\tLISTAGEM COMPLETA\n");
    printf("----------------------------------------------------\n");
    printf("%-30s %s %s\n", "Nome", "Sexo", "Nota");
    printf("%-30s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-30s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-30s %c %6.1f\n", nome3, sexo3, nota3);
    printf("----------------------------------------------------\n");
    system("pause");
}
