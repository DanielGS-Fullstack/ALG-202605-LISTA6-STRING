#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;
    int contador = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, 100, stdin);

    while (texto[i] != '\0') {
        if (texto[i] == 'a' || texto[i] == 'A' ||
            texto[i] == 'e' || texto[i] == 'E' ||
            texto[i] == 'i' || texto[i] == 'I' ||
            texto[i] == 'o' || texto[i] == 'O' ||
            texto[i] == 'u' || texto[i] == 'U') {
            contador++;
        }

        i++;
    }

    printf("Quantidade de vogais: %d\n", contador);

    return 0;
}
