
#include <stdlib.h>
#include <stdio.h>

#define N 100

int main() {

    //int ping = 0;
    //int pong = 0;

    /*printf("Dime tu numero: ");
    scanf(" %i", &ping);
    printf("dime tu otro numero: " );
    scanf(" %i", &pong);*/

    for(int i = 0; i <= N; i++ ){
        printf("%d\n", i);
:
    if(i  == 5 || i%5 == 0){
        printf("ping");
    }

    if (i == 7 || i%7 == 0){
        printf("pong");
    }
    printf("\n");
  }
    return EXIT_SUCCESS;

}


