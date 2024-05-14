#include <stdio.h>
//#include "lecturas.h"

float leerCantidad() {
    float cantidad;
    printf("Ingrese la cantidad de dólares a cambiar: ");
    scanf("%f", &cantidad);
    return cantidad;
}

char leerTipoDivisa() {
    char tipoDivisa;
    printf("Seleccione a qué divisa desea cambiar (euros - 'e', libras esterlinas - 'l', reales - 'r'): ");
    scanf(" %c", &tipoDivisa);
    return tipoDivisa;
}
