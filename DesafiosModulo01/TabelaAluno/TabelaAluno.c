#include <stdio.h>
#include  <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    printf(" Listagem de alunos \n");
    printf(" Nome\t\tNota\n");
    printf("---------------------\n");
    printf("Ana Biatriz\t9,0\n");
    printf("Breno Emanuel\t10,0\n");
    printf("Eduardo Lima\t8,5\n");
    printf("Ingrid Nicoly\t9,5\n");
    printf("Brucci Mancuso\t7,5\n");
    printf("---------------------\a");
}
