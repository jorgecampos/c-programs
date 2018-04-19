#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>


#define N 10000

struct Cordenada{
    double x;
    double y;
};

void pinta (struct Cordenada lista[N]){
    clear();
    for (int i = 0; i<N; i++)
        mvprintw( (int) lista[i].y % LINES, lista[i].x, "*");
    refresh();
}

void actualiza(struct Cordenada lista[N]){
    clear();
    for (int i=0; i<N; i++){
        lista[i].x += rand() % 3 - 1;
        lista[i].y += ( rand() % 200) / 100. + .5;
    }
}

void inicializar(struct Cordenada lista[N]){
    for(int i = 0; i<N; i++){
        lista[i].y = 1.;
        lista[i].x = rand() % COLS;
    }
}

int main() {

    struct Cordenada copo[N];

    srand(time(NULL));
    initscr(); // iniciamos la matriz de ncurses
    inicializar(copo);
    curs_set(0); // quitamos el cursor de la matriz

    while (1){
        actualiza(copo);
        pinta(copo);
        usleep(200000);
    }

    curs_set(1); // Volvemos a poner el cursor
    endwin(); //cerramos nuestra matriz de ncurser

    return EXIT_SUCCESS;

}


