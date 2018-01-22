#include <stdlib.h>
#include <stdio.h>

int main() {

  int l = 3;

  for(int f=0; f<l; f++){
      for(int c=1 ;c<l-1; c++)
          printf("*");
      printf("\n");
  }
    return EXIT_SUCCESS;

}


