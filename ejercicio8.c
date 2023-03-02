//
// Created by Paul Contreras on 02/03/23.
//
/*
 * Encontrar las raíces de una ecuación cuadrática
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <complex.h>

int main(){

    /* Definimos las variables defininidas, en este caso flotantes porque no sabria que datos escribiría
     * el usuario
    */
    float a,b,c, disc, raiz1, raiz2;

    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");
    /*
     * La forma general es ax^2 + bx + c = 0, asi que solicitara los coeficientes
     */
    printf("La forma general es ax^2 + bx + c\n");
    printf("-------------------------------------\n");
    printf("Ingrese el coeficiente de a: \n");
    scanf("%f", &a);
    printf("Ingrese el coeficiente de b: \n");
    scanf("%f", &b);
    printf("Ingrese el coeficiente de c: \n");
    scanf("%f", &c);

    disc = (b * b) - 4*(a*c);

    if (disc > 0){
        disc = sqrtf(disc);

        raiz1 = (-b + disc) / 2*a;
        raiz2 = (-b - disc) / 2*a;

        printf("La raíz 1 de tu ecuación es: %.2f", raiz1);
        printf("La raíz 2 de tu ecuación es: %.2f", raiz2);

    } else if (disc == 0){
        disc = sqrtf(disc);

        raiz1 = (-b + disc) / 2*a;
        raiz2 = raiz1;

        printf(" En este caso las raíces son iguales, entonces el valor de la raíz es: %.2f ", raiz2);

    } else if (disc < 0){
        printf("Tu ecuación no tiene solución real, la solución es compleja desearías ver la solución compleja\n");
        printf("-----------------\n");

        disc = -1 * disc;

        printf("La raíz compleja 1 de tu ecuación es: (-%.2f + i √ %.2f )/ 2 %.2f \n", b,disc,a);
        printf("La raíz compleja 1 de tu ecuación es: (-%.2f - i √ %.2f )/ 2 %.2f \n", b,disc,a);
    }

    system("pause");
    return 0;
}