//
// Created by Paul Contreras on 01/03/23.
//

/*
 * Escriba el código en lenguaje C para determinar
 * si la tecla introducida en el teclado de una computadora corresponde
 * a letra mayúscula, a letra minúscula, dígito o carácter especial.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Definimos las variables principales a utilizar en este caso entera porque utilizaré el ASCII
    char userChar;
    int userKey;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Validador de tecla presionada :)...\n");
    printf("Introduzca alguna tecla: \n");
    scanf("%c", &userChar);

    userKey = userChar;

    if (userKey >= 65 && userKey <= 90){
        printf("La tecla introducida es una mayúscula");
    } else if (userKey >= 97 && userKey <= 122){
        printf("La tecla introducida es una minúscula");
    } else if (userKey >= 32 && userKey <= 47 || userKey >= 58 && userKey <= 64 || userKey >= 123 && userKey <= 255){
        printf("La tecla introducida es una carácter especial");
    } else if (userKey >= 48 && userKey <= 57){
        printf("La tecla introducida es una digito");
    }

    system("pause");

    return 0;

}