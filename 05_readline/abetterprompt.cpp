
#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>


#define N  0x100

int main() {

    char buffer[N];

    printf("nombre: ");
    fgets(buffer, N, stdin);

    readline("nombre: ");

    return EXIT_SUCCESS;

}


