#include <locale.h>
#include <stdio.h>


float calcmediaponderada (float nota1, float nota2, float nota3, float peso1, float peso2, float peso3) {

    float notasPeso = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
    float pesoSoma = (peso1 + peso2 + peso3);
    if (pesoSoma == 0) {
        return 0;
    }
    float resultadoPond = notasPeso / pesoSoma;
    return resultadoPond;
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

  // entrada dos notas
  float nota1, nota2, nota3;
  printf("======== Calculadora de média ponderada ========\n");
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
    
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
    
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);
  printf("=================================================\n ");
  // entrada dos pesos
  float peso1, peso2, peso3;
  printf("Digite agora o peso de cada nota\n");
  printf("Digite o peso da primeira nota: ");
  scanf("%f", &peso1);
    
  printf("Digite o peso da segunda nota: ");
  scanf("%f", &peso2);
    
  printf("Digite o peso da terceira nota: ");
  scanf("%f", &peso3);
  printf("=================================================\n\n ");

  // chamando funcao do calculo da media ponderada

float mediaPonderada = calcmediaponderada(nota1, nota2, nota3, peso1, peso2, peso3);
  printf("A sua média ponderada é: %.2f\n", mediaPonderada);

  return 0;
}