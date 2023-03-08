//
// Created by Paul Contreras on 08/03/23.
//
/*
 * Proporcione el precio de un televisor, seleccionando la opción a partir de 5 modelos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definimos el precio de las 5 televisiones
const int lg55 = 10000;
const int sony55 = 15000;
const int samsung55 = 12000;
const int jvc55 = 6999;
const int philips55 = 7999;

// Defino una funcion para el menu
void menu(){
    printf("\n");
    printf("-----------------");
    printf("|     MENU      |");
    printf("-----------------");
    printf("\n");
    printf(" a - LG 55 pulgadas \n");
    printf(" b - Sony 55 pulgadas \n");
    printf(" c - Samsung 55 pulgadas \n");
    printf(" d - JVC 55 pulgadas \n");
    printf(" e - Philips 55 pulgadas \n");
}

int main(){

    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");
    // Definimos la variable para la selección de usuario
    char userSelection;

    printf("---------------------------");
    printf("|  CHECADOR DE PRECIOS DE TV |");
    printf("---------------------------");
    menu();
    printf("Seleccione un marca para consultar su precio: \n");
    userSelection = getchar();

    // El switch verifica la selección del usuario
    switch (userSelection) {
        case 'a':
            printf("El precio de la TV LG DE 55 pulgadas es: $ %d", lg55);
            break;
        case 'b':
            printf("El precio de la TV SONY DE 55 pulgadas es: $ %d", sony55);
            break;
        case 'c':
            printf("El precio de la TV SAMSUNG DE 55 pulgadas es: $ %d", samsung55);
            break;
        case 'd':
            printf("El precio de la TV JVC DE 55 pulgadas es: $ %d", jvc55);
            break;
        case 'e':
            printf("El precio de la TV PHILIPS DE 55 pulgadas es: $ %d", philips55);
            break;
        default:
            printf("Ingrese una marca correcta!");
            exit(0);
    }

    system("pause");


    return 0;
}