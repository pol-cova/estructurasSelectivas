//
// Created by Paul Contreras on 02/03/23.
//
/*
 * Calcule el pago de un trabajador al día, según las horas trabajadas y el precio por hora para el trabajo
 * que se realice. Las categorías y pago por horas correspondientes son:
    Intendencia: pago por hora $35. -> a
    Asistente : pago por hora $50. -> b
    Administrativo : pago por hora $80. -> c
    Directivo : pago por hora $120. -> d
    Gerente : pago por hora $150. -> e

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu(){
    printf("a -> Intendencia\n");
    printf("b -> Asistente\n");
    printf("c -> Administrativo\n");
    printf("d -> Directivo\n");
    printf("e -> Gerente\n");
}

const int a = 35;
const int b = 50;
const int c = 80;
const int d = 120;
const int e = 150;

int main(){

    float horasTrabajadas, pago;
    char userJob;

    printf("----------------------------------------\n");
    printf("          CALCULADORA DE SALARIO    \n");
    printf("----------------------------------------\n");
    printf("Bienvenido elija un puesto del menu...\n");
    menu();
    printf("Ingrese su puesto laboral: \n");
    userJob = getchar();
    printf("\n");
    printf("Ingrese las horas trabajadas: \n");
    scanf("%f", &horasTrabajadas);

    switch (userJob) {
        case 'a':
            pago = a * horasTrabajadas;
            printf("Su pago de Intendencia por las horas trabajadas es de: %.2f ", pago);
            break;
        case 'b':
            pago = b * horasTrabajadas;
            printf("Su pago de Asistente por las horas trabajadas es de: %.2f ", pago);
            break;
        case 'c':
            pago = c * horasTrabajadas;
            printf("Su pago de Administrativo por las horas trabajadas es de: %.2f ", pago);
            break;
        case 'd':
            pago = d * horasTrabajadas;
            printf("Su pago de Directivo por las horas trabajadas es de: %.2f ", pago);
            break;
        case 'e':
            pago = e * horasTrabajadas;
            printf("Su pago de Gerente por las horas trabajadas es de: %.2f ", pago);
            break;
        default:
            printf("Ingrese un puesto válido!");
            exit(0);
    }

    system("pause");
    return 0;
}
