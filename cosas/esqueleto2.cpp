#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100

int main() {

    char array[N];
    char *p_char;
    int longitud;

    printf("Dime tu nombre: ");
    scanf(" %s", array);

    longitud = strlen(array);
    p_char = (char *) malloc (longitud+1);
    strncpy(array, p_char, longitud+1);

    free(p_char);
    return EXIT_SUCCESS;

}


