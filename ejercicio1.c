//
// Created by Paul Contreras on 23/02/23.
//

/*
 * Escriba el código en lenguaje C que calcule el promedio de 3 calificaciones de un alumno.
 * Si su promedio es mayor que 95 comunicar en pantalla que es SOBRESALIENTE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Definimos las variables principales a utilizar, en este caso flotantes debido a que pueden tener decimales
    float cal1, cal2,cal3,promedio;
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Imprimimos la información y solicitamos los datos
    printf("Sistema de calificaciones para alumnos...\n");
    printf("Ingrese la calificación 1: \n");
    scanf("%f", &cal1);
    printf("Ingrese la calificación 2: \n");
    scanf("%f", &cal2);
    printf("Ingrese la calificación 3: \n");
    scanf("%f", &cal3);

    // Esta es la función que determina tu promedio
    promedio = (cal1 + cal2 + cal3)/3;

    /*
     * Esta instrucción selectiva simple, válida si tienes más de 95 de promedio, si se cumple la condición imprime
     * el mensaje de SOBRESALIENTE, si no termina el programa
     */
    if (promedio >= 95)
    {
        printf("SOBRESALIENTE");
    }

    system("pause");
    return 0;
}


