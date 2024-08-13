#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    unsigned short int x = 3, y = 5;
    int menor = x < y, maior = x > y, menor_ou_igual = x <= y, maior_ou_igual = x >= y, igual = x == y, diferrente = x != y;
    setlocale(LC_ALL, "Portuguese");
    printf("%hu é menor que %hu? %i\n", x, y, menor);
    printf("%hu é maior que %hu? %i\n", x, y, maior);
    printf("%hu é menor ou igual a %hu? %i\n", x, y, menor_ou_igual);
    printf("%hu é maior ou igual a %hu? %i\n", x, y, maior_ou_igual);
    printf("%hu é igual a %hu? %i\n", x, y, igual);
    printf("%hu é diferrente de %hu? %i\n", x, y, diferrente);
    system("pause");
}
