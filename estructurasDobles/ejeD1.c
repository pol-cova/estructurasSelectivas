//
// Created by Paul Contreras on 08/03/23.
//
/*
 * Elabore un código que proporcione el precio de un auto, seleccionando la opción de entre 5 diferentes.
 * Los autos que se consideran son los que usted desee.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definimos las constantes a utilizar
const int tsuru = 25000;
const int ferrari = 1000000;
const int mercedes = 650000;
const int lambo = 900000;
const int tesla = 800000;


// Definimos y creamos una funcion para el menu del programa
void menu(){
    printf("\n");
    printf("-----------------");
    printf("|     MENU      |");
    printf("-----------------");
    printf("\n");
    printf(" a - Tsuru Tuneado Fachero \n");
    printf(" b - Ferrari Tuneado Fachero \n");
    printf(" c - Mercedes Tuneado Fachero \n");
    printf(" d - Lambo Tuneado Fachero \n");
    printf(" e - Testa Tuneado Fachero \n");
}

// Creamos la funcion principal
int main(){

    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos las variables a utlizar en este caso solo la opcion del usuario
    char userSelection;

    printf("---------------------------");
    printf("|  CHECADOR DE PRECIOS DE AUTOS |");
    printf("---------------------------");
    menu();
    printf("Seleccione un auto para consultar su precio: \n");
    userSelection = getchar();

    // El switch verifica que selecciono el usuario y muestra el resultado
    switch (userSelection) {
        case 'a':
            printf("El auto que selecciono fue el Tsuru Tuneado su precio es: $ %d", tsuru);
            break;
        case 'b':
            printf("El auto que selecciono fue el Ferrari Tuneado su precio es: $ %d", ferrari);
            break;
        case 'c':
            printf("El auto que selecciono fue el Mercedes Tuneado su precio es: $ %d", mercedes);
            break;
        case 'd':
            printf("El auto que selecciono fue el Lambo Tuneado su precio es: $ %d", lambo);
            break;
        case 'e':
            printf("El auto que selecciono fue el Tesla Tuneado su precio es: $ %d", tesla);
            break;
        default:
            printf("Elija un auto correcto!");
            exit(0);
    }


    system("pause");
    return 0;
}