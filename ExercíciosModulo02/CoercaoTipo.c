#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    int n1 =  5, n2 = 2, di = n1 / n2;
    float dr = (float)n1 / (float)n2;
    setlocale(LC_ALL, "Portuguese");
    printf("Divis�o inteira entre %hu e %hu � %hu;\n", n1, n2, di);
    printf("Divis�o real entre %hu e %hu � %hu;\n", n1, n2, dr);
    system("pause");
}
