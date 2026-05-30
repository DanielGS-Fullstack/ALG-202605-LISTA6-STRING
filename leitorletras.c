#include <stdio.h>

int main() {
    char nome[100];
    int i = 0;

    printf("Digite um nome: ");
    fgets(nome, 100, stdin);

    while (nome[i] != '\n' && nome[i] != '\0') {
        i++;
    }

    printf("Quantidade de letras: %d\n", i);
    printf("Primeira letra: %c\n", nome[0]);
    printf("Ultima letra: %c\n", nome[i - 1]);

    return 0;
}
