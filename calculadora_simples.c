#include <stdio.h>
#include <locale.h>

// função que calcula a soma
double soma(double numero1, double numero2) {
    return numero1 + numero2; 
}

// função que calcula a subtracao
double subtracao(double numero1, double numero2) {
    return numero1 - numero2; 
}

// função que calcula a multiplicacao
double multiplicacao(double numero1, double numero2) {
  return numero1 * numero2;
}

// função que calcula a divisao
double divisao(double numero1, double numero2) { 
    if (numero2 != 0) {
    return numero1 / numero2;
    } else {
        printf("Não foi possível fazer a divisão");
        return 0;
    }
}

int main() {

  setlocale(LC_ALL, "pt_BR.UTF-8");

  // recebe dois numeros inteiros ou decimais
  double numero1, numero2, escolha;

  printf("=========== CALCULADORA SIMPLES ===========\n");
  printf("Digite o primeiro número: ");
  scanf("%lf", &numero1);
  printf("Digite o segundo número: ");
  scanf("%lf", &numero2);
  printf("Agora escolha qual operação irá fazer\n");
  printf("1 para adição\n");
  printf("2 para subtração\n");
  printf("3 para multiplicação\n");
  printf("4 para divisão\n");
  printf("digite o numero para determinada operação: ");
  scanf("%lf", &escolha);
  printf("===========================================\n\n\n");

  // condicionais que verificarão qual operacão foi escolhida
  if (escolha == 1) {
    // chamando a função soma
    double resultadoAdi = soma(numero1, numero2);
    printf("O resultado da sua operação foi: %.2lf\n", resultadoAdi);
  }
  else if (escolha == 2) {
    // chamando a função subtração
    double resultadoSub = subtracao(numero1, numero2);
    printf("O resultado da sua operação foi: %.2lf\n", resultadoSub);
  }
  else if (escolha == 3) {
    // chamando a função multiplicação
    double resultadoMult = multiplicacao(numero1, numero2);
    printf("O resultado da sua operação foi: %.2lf\n", resultadoMult);
  }
  else if (escolha == 4) {
    // chamando a função divisão
    double resultadoDiv = divisao(numero1, numero2);
    printf("o resultado da sua operação foi %.2lf\n", resultadoDiv);
  }
   else {
    printf("Opção inválida\n"); 
   }

  return 0;
}