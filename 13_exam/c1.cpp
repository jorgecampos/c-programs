#include <stdlib.h>
#include <stdio.h>

#define N 3

int main() {
    //dos vectores a y b
    //3 double
    //la suma y la multiplcacion de las columnas 0,1,2
    //a vs b
    //

    double a[N] = {1, 2, 3};
    double b[N] = {4, 5, 6};

    double resultado=0;
    for(int i=0; i<N; i++)
        resultado += a[i] * b[i];
    printf("%.2lf", resultado);




    return EXIT_SUCCESS;

}


