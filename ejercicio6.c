//
// Created by Paul Contreras on 01/03/23.
//
/*
 * Introduzca un año y diga si es bisiesto o no lo es.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Definimos las variables principales a utilizar en este caso un entero porque es un año
    int userYear;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Validador de año bisiesto :)...\n");
    printf("Introduzca el año: \n");
    scanf("%d", &userYear);

    if (userYear % 400 == 0 && userYear % 100 == 0) {
        printf("%d Es un año bisiesto!", userYear);
    } else if (userYear % 4 == 0 && userYear % 100 != 0){
        printf("%d Es un año bisiesto!", userYear);
    } else{
        printf("%d No un año bisiesto!", userYear);
    }

    system("pause");
    return 0;
}