#include <stdlib.h>
#include <stdio.h>

#define N 3




int main() {

    int a[N][N] = {
       // --> Segunda N
       // |
       // | Primera N
        {9,4,1},
        {5,2,7},
        {3,8,6}
    };
    for(int desplaz=0; desplaz<N; desplaz++){
        for(int elem=0; elem<N; elem++)
            printf("%4i", a[elem%N][(elem+1)%N]);
        printf("\n");
    }
        return EXIT_SUCCESS;

}


