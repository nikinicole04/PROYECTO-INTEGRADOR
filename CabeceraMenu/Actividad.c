#include <stdio.h>
#include "lecturas.h"
#include "operaciones.h"


int main() {
    float cantidad, valorConvertido;
    char tipoDivisa;

    cantidad = leerCantidad();
    tipoDivisa = leerTipoDivisa();

    
    valorConvertido = convertirDivisa(cantidad, tipoDivisa);

    if (valorConvertido > 0) {
        printf("El valor a entregar es: %.2f\n", valorConvertido);
    } else {
        printf("Tipo de divisa no válida.\n");
    }
    

    return 0;
}


