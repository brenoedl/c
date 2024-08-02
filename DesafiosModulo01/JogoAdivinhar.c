#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main(){
    srand(time(NULL));
    unsigned short int nc = rand() % 5 + 1;
    unsigned short int nj;
    setlocale(LC_ALL, "Portuguese");
    printf("Vou penssar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual o seu palpite? ");
    scanf("%hu", &nj);
    printf("Eu pensei no número %hu e você pensou no número %hu\n", nc, nj);
    system("pause");
}
