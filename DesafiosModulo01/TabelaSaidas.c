#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\7 \t=\t Beep\n");
    printf("\\a \t=\t Beep\n");
    printf("\\n \t=\t Nova linha\n");
    printf("\\t \t=\t Tabulação\n");
    printf("\\\\ \t=\t Contra barra\n");
    printf("\\r \t=\t Retorno de carro\n");
    printf("\\b \t=\t Back space\n");
    printf("%%%% \t=\t Porcentagem\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    system("pause");
}
