#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    unsigned short int a = 3, b = 2, r1 = a + b, r2 = a - b, r3 = a * b, r4 = a / b, r5 = a % b;
    setlocale(LC_ALL, "Portuguese");
    printf("%hu + %hu = %hu\n", a, b, r1);
    printf("%hu - %hu = %hu\n", a, b ,r2);
    printf("%hu * %hu = %hu\n", a, b, r3);
    printf("%hu / %hu = %hu\n", a, b, r4);
    printf("%hu %% %hu = %hu\n", a, b, r5);
    system("pause");
}
