#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main(){
    srand(time(NULL));
    unsigned short int n = rand() % 10 + 1;
    setlocale(LC_ALL, "Portuguese");
    printf("Eu gerei o número (%hu).\n", n);
    system("pause");
}
