#include <stdlib.h>
#include <stdio.h>

int main() {

    int numero;


    printf("Numero: ");
    scanf(" %i", &numero);

    if (numero % 2 == 0) {
        printf("El numero %i es Par.\n", numero);
        printf("Y los pares me gustan.\n");
    } else
        printf("Impar de mierda.\n");

    printf("FIN\n");

    return EXIT_SUCCESS;

}


