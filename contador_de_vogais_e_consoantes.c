#include <stdio.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "pt_BR.UTF-8");

  char palavra[100];

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  int vogais = 0;
  int consoantes = 0;

  //laço que conta as vogais e consoantes, no qual percorre a string, verifica se há vogais e consoantes e contabiliza depois
  for (int i = 0; palavra[i] != '\0'; i++) {
    switch (palavra[i]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': 
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vogais++;
      break;
      default: 
      if (palavra [i] >= 'a' && palavra [i] <= 'z' && palavra[i] >= 'A' && palavra[i] <= 'Z') {
        consoantes++;
      }
    } 
  }
  
  printf("O número de vogais é: %d\n", vogais);
  printf("O número de consoantes é: %d\n", consoantes);
  
  return 0;
} 