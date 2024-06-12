#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);


    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("\nO ano é bissexto.");
    } else {
        printf("\nO ano não é bissexto");
    } 

    return 0;
}