#include <stdio.h>
#include <locale.h>

//Celsius para F
float converterFahren (float celsius, float fahren) {
    float resultadoF;
    resultadoF = (celsius * 1.8) + 32;
     return resultadoF;
} 
//F para celsius
float converterCelsius (float fahren, float celsius) {
    float resultadoC;
    resultadoC = (fahren - 32) / 1.8;
    return resultadoC;
}

int main () {

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float celsius, fahren;
    int escolha;
    printf("Seja bem vindo ao conversor de temperatura (Celsius e Fahrenheit)\n\n\n");
    printf("Digite 1 para Celsius para Fahrenheit\n");
    printf("Digite 2 para para Fahrenheit para Celsius\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite o valor da temperatura em celsius: ");
        scanf("%f", &celsius);
        printf("O resultado da sua conversão de Celsius para Fahrenheit foi: %.2f\n", converterFahren(celsius, fahren));
    } else if (escolha == 2) {
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%f", &fahren);
        printf("O resultado da sua conversão de Celsius para Fahrenheit foi: %.2f\n", converterCelsius(fahren, celsius));
    } else {
        printf("Operação inválida.");
    }


return 0;
}