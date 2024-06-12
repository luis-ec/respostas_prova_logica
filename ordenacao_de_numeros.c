#include <stdio.h>

int main(){

    int n1, n2, n3, maior, meio, menor;

// entrada de dados
     printf("Algoritmo da ordenação de números inteiros, por favor digite 3 números inteiros\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    maior = n1;
    meio = n1;
    menor = n1;

//verifica o tamanho dos numeros e ordena eles
    if (n1 > n2 && n1 > n3 && n2 > n3) {
        maior = n1;
        meio = n2;
        menor = n3;
    } else if (n1 > n2 && n1 > n3 && n3 > n2) {
        maior = n1;
        meio = n2;
        menor = n3;
    } if (n2 > n1 && n2 > n3 && n1 > n3) {
        maior = n2;
        meio = n1;
        menor = n3;
    } else if (n2 > n1 && n2 > n3 && n3 > n2) {
        maior = n2;
        meio = n1;
        menor = n3;
    } if (n3 > n1 && n3 > n2 && n2 > n1) {
        maior = n3;
        meio = n2;
        menor = n1;
    } else if (n3 > n1 && n3 > n2 && n1 > n2) {
        maior = n3;
        meio = n1;
        menor = n3;
    } 
    printf("A ordem crescente é: %d\t %d\t %d\t", maior, meio, menor);

    return 0;
}