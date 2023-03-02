//
// Created by Paul Contreras on 01/03/23.
//
/*
 * Lea 3 números. Indique el mayor y si está entre 1 y 10 comunique el mensaje correspondiente .
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Definimos las variables que almacenaran los números
    float num1,num2,num3;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos datos
    printf("Este programa haya el mayor de 3 números...\n");
    printf("Ingrese el número 1: \n");
    scanf("%f", &num1);
    printf("Ingrese el número 2: \n");
    scanf("%f", &num2);
    printf("Ingrese el número 3: \n");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3){
        if (num1 >= 1 && num1 <= 10){
            printf("%.2f Es el numero mayor y esta entre 1 y 10\n", num1);
        } else{
            printf("%.2f Es el numero mayor", num1);
        }
    } else if (num2 > num1 && num2 > num3){
        if (num2 >= 1 && num2 <= 10){
            printf("%.2f Es el numero mayor y esta entre 1 y 10\n", num2);
        } else{
            printf("%.2f Es el numero mayor", num2);
        }
    } else if (num3 > num1 && num3 > num2){
        if (num3 >= 1 && num3 <= 10){
            printf("%.2f Es el numero mayor y esta entre 1 y 10\n", num3);
        } else{
            printf("%.2f Es el numero mayor", num3);
        }
    }

    system("pause");
    return 0;
}
