#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char* nome = "Breno Emanuel";
    unsigned short int idade = 22;
    char sexo = 'M';
    float peso = 45.52f;
    printf("Olá %s você tem %hu anos de idade e seu sexo é %c e o peso é de %5.2fKg\n", nome, idade, sexo, peso);
    system("pause");
}
