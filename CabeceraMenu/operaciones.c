#include <stdio.h>

float convertirDivisa(float cantidad, char tipoDivisa) {
    if (tipoDivisa == 'e') {
        return cantidad * 0.85; // Conversión a euros
    } else if (tipoDivisa == 'l') {
        return cantidad * 0.72; // Conversión a libras esterlinas
    } else if (tipoDivisa == 'r') {
        return cantidad * 5.46; // Conversión a reales brasileños
    } else {
        return 0.0; // Valor por defecto
    }
}
