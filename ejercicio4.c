//
// Created by Paul Contreras on 23/02/23.
//
/*
 * Escriba el código en lenguaje C que lea tres longitudes e indique si estas pueden formar un triángulo o no.
 * Nota: investigue los criterios que indica la Geometría plana, como condición para formar un triángulo
 */

/*
 * Realizo la función principal para verificar si se puede formar el triángulo bajo los supuestos:
 * 1. 3 lados iguales
 * 2. 2 lados iguales
 * 3. Ningún lado igual
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void isAtriangle(int lado1, int lado2, int lado3 ){
    if(lado1 == lado2 && lado1 == lado3){
        printf("SE PUEDE CONSTRUIR UN TRIÁNGULO EQUILÁTERO");
    } else if (lado1 == lado2 || lado2 == lado3){
        printf("SE PUEDE CONSTRUIR UN TRIÁNGULO ISÓSCELES");
    } else {
        printf("SE PUEDE CONSTRUIR UN TRIÁNGULO ESCALENO");
    }
}


int main()
{
    // Definimos las variables principales a utilizar
    float lado1,lado2,lado3;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Validador de triángulos :)...\n");
    printf("Ingrese el lado 1: \n");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2: \n");
    scanf("%f", &lado2);
    printf("Ingrese el lado 3: \n");
    scanf("%f", &lado3);

    /* Esta función checa si los lados son diferentes de 0, si son llama a una función para verificar datos
     * si es 0 menciona un mensaje de error y finaliza el programa
    */
    if (lado1 != 0 && lado2 != 0 && lado3 != 0 ){
        isAtriangle(lado1, lado2, lado3);
    } else {
        printf("Error uno de tus lados tiene el valor de 0");
    }

    system("pause");

    return 0;
}