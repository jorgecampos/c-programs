#include <stdlib.h>
#include <stdio.h>


double suma(double  op1, double op2){
    return op1 + op2;
}

void contenido(double *p_op1, double *p_op2){



    printf("Escribe el op1: ");
    scanf(" %lf", p_op1);
    printf("Escribe el op2: ");
    scanf(" %lf", p_op2);


}

int main() {

    double op1,op2;

    contenido(&op1, &op2);
    printf("%.2lf + %.2lf = %.2lf\n", op1, op2, suma(op1, op2));


    return EXIT_SUCCESS;

}


