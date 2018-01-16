#include <stdlib.h>
#include <stdio.h>

int  es_par(int prueba){
    return !(prueba % 2);

}

bool es_p(int prueba){
    if (prueba % 2)
        return false;
    return true;
}

int es_p(int prueba){
    return (prueba % 2 ? 0 : 1)
}

void contenido (int *p_op1){
    printf("Escribe tu numero: ");
    scanf(" %i", p_op1);
}

int main() {
   
    

    return EXIT_SUCCESS;

}


