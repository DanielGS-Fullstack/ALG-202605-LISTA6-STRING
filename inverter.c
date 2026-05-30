#include <stdio.h>

int main() {
    char palavra[100];
    int i = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    while (palavra[i] != '\n' && palavra[i] != '\0') {
        i++;
    }

    printf("Palavra invertida: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    printf("\n");

    return 0;
}
