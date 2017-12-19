
#include <stdlib.h>
#include <stdio.h>

#define D 3
#define x 0
#define y 1
#define z 2

int main() {


    double vertice[D];

    /*entrada de datos */
    printf("(x, y, z): ");
    scanf(" %lf , %lf , %lf ", &vertice[x], &vertice[y], &vertice[z]);
  
    /*salida de datos */
    printf("%.2lf, %.2lf, %.2lf \t", vertice[x], vertice[y], vertice[z]);
    printf("%.2lf, %.2lf \n", vertice[x] / vertice[z],
                             -vertice[y] / vertice[z]);

    return EXIT_SUCCESS;

}


