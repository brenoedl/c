#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Ol� %s voc� tem %i anos", "Breno", 22);
    system("pause");
}
