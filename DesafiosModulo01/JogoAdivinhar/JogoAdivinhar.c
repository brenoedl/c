#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    unsigned short int nc = rand() % 5 + 1;
    unsigned short int nj;
    printf("Vou pensar em um número entre 1 e 5. Temte adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%i", &nj);
    printf("Eu pensei no número %i e você pensou no número %i.", nc, nj);
}
