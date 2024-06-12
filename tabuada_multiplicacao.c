#include <locale.h>
#include <stdio.h>

int main() {

  setlocale(LC_ALL, "pt_BR.UTF-8");

  int numero1;

printf("============Tabuada de multiplicações===========\n");
  printf("Digite um número: ");
  scanf("%d", &numero1);

  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", numero1, i, numero1 * i);
  }
  printf("================================================\n");
  return 0;
}