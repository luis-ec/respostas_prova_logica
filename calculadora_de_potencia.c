#include <stdio.h>
#include <locale.h>
#include <math.h>

int opePotencia (int base, int expoente) {

// calculando a potencia com pow da lib <math.h>
    int resultadoPotencia = pow(base, expoente);

    return resultadoPotencia;
}

int main() {

  setlocale(LC_ALL, "pt_BR.UTF-8"); 

// entrada de dados
  int base, expoente;
  printf("========== Calculadora de Potência ==========\n");
  printf("Digite sua base: ");
  scanf("%d", &base);
  printf("Digite seu expoente: ");
  scanf("%d", &expoente);
  printf("=============================================\n");

// chamando a função para calcular a potência
  int resultPoten = opePotencia (base, expoente);

  printf("\nO resultado da sua operação foi: %d\n", resultPoten);

  return 0;
} 