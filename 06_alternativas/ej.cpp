#include <stdlib.h>
#include <stdio.h>


int main(){

	int color1;
	int color2;

printf("Rojo = 1.\n Amarillo = 2.\n Azul = 3 Sin color = 0.\n");

	printf("Escribe el primer color: \n");
	scanf("%i", &color1);

	printf("Escribe el segundo color: \n");
	scanf("%i", &color2);

	if (color1 == 1 && color2 == 2)
	   printf("Naranja.\n");

	else if (color1 == 1 && color2 == 3)
	   printf("Morado.\n");

	else if (color1 == 2 && color2 == 1)
	   printf("Naranja.\n");

	else if (color1 == 2 && color2 == 3)
	   printf("Verde.\n");

	else if (color1 == 3 && color2 == 1)
	   printf("Morado.\n");

	else if (color1 == 3 && color2 == 2)
	   printf("Verde.\n");

        else if (color1 == 0 && color2 == 1)
            printf("Rojo.\n");

        else if (color1 == 1 && color2 == 0)
            printf("Rojo.\n");

         else if (color1 == 2 && color2 == 0)
            printf("Amarillo.\n");

         else if (color1 == 0 && color2 == 2)
            printf("Amarillo.\n");

         else if (color1 == 3 && color2 == 0)
            printf("Azul.\n");

         else if (color1 == 0 && color2 == 3)
            printf("Azul.\n");

	else printf("No se nada de ese tema.\n");

	return EXIT_SUCCESS;
}
