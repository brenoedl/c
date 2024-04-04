#include  <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguesse");
    int a = 5;
    int b = 2;
    int r1 = a + b;
    int r2 = a - b;
    int r3 = a * b;
    int r4 = a / b;
    int r5 = a % b;
    printf("%i + %i = %i\n" , a, b, r1);
    printf("%i - %i = %i\n" , a, b, r2);
    printf("%i * %i = %i\n" , a, b, r3);
    printf("%i / %i = %i\n" , a, b, r4);
    printf("%i %% %i = %i\n" , a, b, r5);
}
