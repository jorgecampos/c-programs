#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define N 0x100

int main() {

/*Puntero: Es una variable que contiene una direccion de meoria*/

    const char *p = "The world is";// constante tipo cadena

    /*char const *p; //Puntero a una constante.La forma correccta de decir que el char es const
    char * const p; //Puntero constante (fijo)
    char const * const p; //Puntero fijo a una constante*/

    char frase[N] = "a vampire.\n"; //inicializacion
    char *d = frase;

    frase[2] == 'v'; //notacion de matrices
    *d == 'v'; //notacion de puntero
    return EXIT_SUCCESS;

}
