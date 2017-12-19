#include <stdlib.h>
#include <stdio.h>

int main() {

    int bit1;
    int bit2;

    printf("Cual es el  bit 1: ");
    scanf(" %i", &bit1);
    printf("Cual es el  bit 2: ");
    scanf(" %i", &bit2);

    if (bit1 == 0 && bit2 == 1)
        printf("Tu numero es 1.\n");

    else if (bit1 == 0 && bit2 == 0)
        printf("Tu numero es 0.\n");

    else if(bit1 == 1 && bit2 == 0)
        printf("Tu numero es 2.\n");

    else if(bit1 == 1 && bit2 ==1)
        printf("Tu numero es 3.\n");

    else
      printf("Pon un 0 o un 1.\n");

    return EXIT_SUCCESS;

}


