#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    unsigned short int nc = rand() % 5 + 1;
    unsigned short int nj;
    printf("Vou pensar em um n�mero entre 1 e 5. Temte adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%i", &nj);
    printf("Eu pensei no n�mero %i e voc� pensou no n�mero %i.", nc, nj);
}
