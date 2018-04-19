#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#define M 0x40
#define N 0x10

#define CAR_LLENO 'o'
#define CAR_VACIO '^'

#define SON_VALIDAS(f,c) (((f)>=0 && (f)<M) && ((c)>=0 && (c)<N))

#define MIN_SUPER 2
#define ASENTAR 3

void pintar(int matriz[M][N]){
    for(int fila=0; fila<N; fila++){
        for(int col=0; col<N; col++)
            printf("%c", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

/*bool es_valido(int x, int y){
    return( (x>=0 && x<M) && (y>=0 && y=N));
}*/

void dame_coord(int *x, int *y){
    printf("Usa unas cordenadas invalidas para terminar. \n");
    printf("\n\tNuevo x, y: ");
    scanf(" %i, %i", x, y);
    --*x, --*y;
}

void poblacion_inicial(int matriz[M][N]){
    int x, y;
    do{
    system("clear");
    pintar(matriz);
    dame_coord(&x, &y);

    if(SON_VALIDAS(x,y))
    matriz[x][y] = 1;

    } while(SON_VALIDAS(x,y));
}

int vecinos(int f, int c, int matriz[M][N]){
    int n_vecinos = 0;
    for(int fv = f-1; fv < f + 2; fv++)
        for(int cv = c-1; cv<c+2; cv++)
            if(SON_VALIDAS(fv, cv))
        n_vecinos += matriz[fv][cv];
    n_vecinos--;
    return n_vecinos;

}

void calcular(int futuro[M][N], int actual[M][N]){

    int n_vecinos;

    for(int f=0; f<M; f++)
        for(int c=0; c<N; c++){
          n_vecinos = vecinos(f, c, actual);
          if(n_vecinos < MIN_SUPER)
              futuro[f][c] = 0;
          if(n_vecinos == ASENTAR)
               futuro[f][c] = 1;
          if(n_vecinos < ASENTAR)
               futuro[f][c] = 0;
        }

}
int main() {

int actual[M][N],
    futuro[M][N];

    bzero(actual, sizeof(actual));
    poblacion_inicial(actual);

    while(1) {
    calcular(futuro, actual);
    pintar(actual);
    }
    return EXIT_SUCCESS;

}

