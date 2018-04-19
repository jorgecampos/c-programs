#include <stdlib.h>
#include <stdio.h>




int main() {

    //
    //Carga la variable opcion
    //con un numero entre 1 o 5
    //preguntadole al usuario
    //

    int opcion;

    do{
    printf("dime tu opcion: ");
    scanf(" %i", &opcion);

    }while(opcion  < 1 || opcion > 5);


    return EXIT_SUCCESS;

}


