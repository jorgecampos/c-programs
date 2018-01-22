#include <stdio.h>
#include <stdlib.h>

#define N 3

bool es_blanco1(int f, int c)
{

        return c == 0 || c == N-1 || f == 0 || f == N-1;
}
bool es_negro1(int f, int c)
{

        return c == 0 || c == N-1 || f == 0 || f == N-1;
}

bool es_negro2(int f, int c)
{

        return c == 7 || c == N-7 || f == 7 || f == N-7;
}

int main(){

        for (int f=0; f<N; f++){
            for (int c=0; c<N; c++)
                if ( es_negro1(f,c) )
                    printf("*");
                 else
                  printf("*");
        printf("\n");
        }

        for (int f=0; f<N; f++){
            for (int c=0; c<N; c++)
                if ( es_blanco1(f,c) )
                    printf("1");
                else
                  printf("1");
        printf("\n");
        }
        for (int f=7; f<N; f++){
            for (int c=7; c<N; c++)
                if ( es_negro2(f,c) )
                    printf("0");
                else
                  printf("0");
        printf("\n");
        }

    printf("\n");
    return EXIT_SUCCESS;
}

