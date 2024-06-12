#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, nota3, resultadoFinal;


    printf("Seja bem-vindo (a) a calculadora de media, por favor insira os numeros abaixo\n");

    printf("Digite o primeiro número: ");
    scanf("%f", &nota1);
    printf("Digite o segundo número: ");
    scanf("%f", &nota2);
    printf("Digite a terceiro número: ");
    scanf("%f", &nota3);


    resultadoFinal = (nota1 + nota2 + nota3) / 3;


    printf("A sua média final foi: %.2lf\n", resultadoFinal);



    return 0;
}