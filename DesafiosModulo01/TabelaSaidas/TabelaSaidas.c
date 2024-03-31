#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    printf("-----------------------------------\n");
    printf("\\a\t=\tBeep\n");
    printf("\\n\t=\tNova linha\n");
    printf("\\t\t=\tTabulação\n");
    printf("\\\"\t=\tAspas dulplas\n");
    printf("\\\\\t=\tContra barra\n");
    printf("\\\?\t=\tInterrogação\n");
    printf("%%%%\t=\tPorcentagem\n");
    printf("-----------------------------------\n");
}
