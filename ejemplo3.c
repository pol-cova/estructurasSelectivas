//
// Created by Paul Contreras on 23/02/23.
//
#include <stdio.h>

#include <stdlib.h>

#define NI 85000

#define VWG 110000

#define VWJ 152000

#define DS 180000

#define DN 170000

int main()

{

    char opcion;

    printf("Indique el auto para el cual averigua precio: \n\n");

    printf("a- Nissan, Tsuru. \n");

    printf("b- VW, Golf.\n");

    printf("c- VW, Jetta.\n");

    printf("d- Dodge, Stratus.\n");

    printf("e- Dodge, Ne%cn.\n",162);

    printf("\nSeleccione auto: \n\n");

    opcion = getchar();

    switch(opcion)

    {

        case 'a':

            printf("\nEl costo del Nissan, Tsuru es:$ %li\n",NI);

            break;

        case 'b':

            printf("\nEl VW, Golf cuesta:$ %li\n",VWG);

            break;

        case 'c':

            printf("\nEl VW, Jetta cuesta:$ %li\n",VWJ);

            break;

        case 'd':

            printf("\nEl costo del Dodge, Stratus es:$ %li\n",DS);

            break;

        case 'e':

            printf("\nEl Dodge, Ne%cn cuesta:$ %li\n",162, DN);

            break;

        default : printf("\n No existe informaci%cn para la opci%cn %c\n\n",162,162, opcion);

    }

    system("pause");

    return 0;

}