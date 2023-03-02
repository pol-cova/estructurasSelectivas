//
// Created by Paul Contreras on 23/02/23.
//
/*
 * Escriba el código en lenguaje C que dado un número se indique si es par
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Definimos la variable principal para almacenar números, en este caso entero
    int userNumber;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Bienvenido al sistema validador de números pares...\n");
    printf("Ingrese un número: ");
    scanf("%d", &userNumber);

    /*
     * Esta función verifica si el número que ingreso el usuario es par con la función del resto, si es par
     * returna un mensaje mencionando que es par, si no solo dice que no es par
     */
    if(userNumber % 2 == 0)
    {
        printf("%d es un número par :)\n", userNumber);
    } else {
        printf("%d no es par :(\n",userNumber);
    }

    system("pause");

    return 0;
}