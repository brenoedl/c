#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    unsigned short int x = 3, y = 5;
    char* menor =( x < y)?"Verdadeiro":"Falso";
    char* maior = (x > y)?"Verdadeiro":"Falso";
    char* menor_ou_igual = (x <= y)?"Verdadeiro":"Falso";
    char* maior_ou_igual = (x >= y)?"Verdadeiro":"Falso";
    char* igual = (x == y)?"Verdadeiro":"Falso";
    char* diferrente = (x != y)?"Verdadeiro":"Falso";
    setlocale(LC_ALL, "Portuguese");
    printf("%hu � menor que %hu? %s\n", x, y, menor);
    printf("%hu � maior que %hu? %s\n", x, y, maior);
    printf("%hu � menor ou igual a %hu? %s\n", x, y, menor_ou_igual);
    printf("%hu � maior ou igual a %hu? %s\n", x, y, maior_ou_igual);
    printf("%hu � igual a %hu? %s\n", x, y, igual);
    printf("%hu � diferrente de %hu? %s\n", x, y, diferrente);
    system("pause");
}
