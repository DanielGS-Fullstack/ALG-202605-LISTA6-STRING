#include <stdio.h>

void maiuscula(char texto[]) {
    int i = 0;

    while (texto[i] != '\0') {

        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }

        i++;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    fgets(texto, 100, stdin);

    maiuscula(texto);

    printf("Resultado: %s", texto);

    return 0;
}
