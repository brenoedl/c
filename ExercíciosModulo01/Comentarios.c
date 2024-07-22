#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese"); //Altera o idioma para português
    printf("Oi,\ntudo\nbem?\n\a");
    printf("C é\n \"SUPER\" \nfácil!\n");
}
