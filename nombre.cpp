
#include <stdlib.h>
#include <stdio.h>

int main() {

    char nombre[256];
    char apellido[256];

    printf("Cual es tu  nombre: ");
    scanf(" %s", nombre);
    printf("Cual es tu apellido: ");
    scanf (" %s", apellido);
    printf("Tu nombre es: %s %s.\n", nombre, apellido);

    return EXIT_SUCCESS;

}


