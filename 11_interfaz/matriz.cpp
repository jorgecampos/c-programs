#include <stdlib.h>
#include <stdio.h>
//leer una matriz
//  leer cada fila
//    leer cada col
//    si estoy en la fila 1 voy contando el total de col
//    sino
//      rellenar con 0 cuando hay menos o descartar los que hay de mas.
//  pasar a la fila siguente. cuado haya 1 intro. y terminar si hay dos
//
//
int main() {

    int filas = 0, columnas = 0; // Las totales de una matriz.
    int columna = 0; //el nuemro de columnas
    int miradita; // mira si lo siguiente es un \n.
    bool fin = false; // encuetra dos barra n
    double nuevo_num;
    double *matriz = NULL;

    printf("tu matriz: \n\n");

    do{
        /*pedir un numero y alojarlo en la matriz dinamica*/
        scanf(" %lf", &nuevo_num);
        if (filas == 0)
            columnas++;
        columna++;
        if (columna <= columnas){ // las columnas extras las descartamos.
            matriz = (double *) realloc(matriz,
                    (filas * columnas + columna) * sizeof(double));
            *(matriz+filas*columnas+columna-1) = nuevo_num;

        }

        /* Distingir si estamos cambiando de linea o se
         * terminado la matriz (dos saltos de linea)*/
        miradita = getc(stdin);
        if (miradita == '\n'){
        miradita = getc(stdin);
        filas++;
        if (miradita == '\n')
            fin = true;
        else{
            columna = 0;
            for (int c=columna+1; c<columnas; c++){
                matriz = (double *) realloc(matriz,
                        (filas * columnas + c) * sizeof(double));
                *(matriz+filas*columnas+c-1) = 0.;
            }
        }
    }
    ungetc(miradita, stdin);

} while(!fin);

/*ver la matriz*/

for(int f = 0; f<filas; f++){
    for(int c=0; c<columnas; c++)
        printf("%7.2lf", *(matriz+c+f*columnas));
    printf("\n");
}

return EXIT_SUCCESS;

}


