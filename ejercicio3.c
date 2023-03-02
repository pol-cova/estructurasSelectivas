//
// Created by Paul Contreras on 23/02/23.
//
/*
 * Escriba el código en lenguaje C que dado un número se indique si es par  o impar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Definimos las variables principales a utilizar
    int userNumber;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Bienvenido al sistema validador de números pares o impares...\n");
    printf("Ingrese un número: ");
    scanf("%d", &userNumber);


    if (userNumber == 0){
        printf("ERROR el numero que ingresaste es 0 :v");
    } else if(userNumber % 2 == 0)
    {
        printf("%d es un número par :)\n", userNumber);
    } else{
        printf("%d es un número impar :)\n", userNumber);
    }

    system("pause");

    return 0;

}