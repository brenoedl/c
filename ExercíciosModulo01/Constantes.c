#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    const char* NOME = "Breno Emanuel";
    const unsigned short int IDADE = 22;
    const char SEXO = 'M';
    const float PESO = 45.52f;
    printf("Olá %s você tem %hu anos de idade e seu sexo é %c e o peso é de %5.2fKg\n", NOME, IDADE, SEXO, PESO);
    system("pause");
}
