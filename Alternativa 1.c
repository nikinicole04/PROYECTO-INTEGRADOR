// H.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>

int main() {
    char sexo;
    float estatura, peso, dosis;
    int edad;

    do {
        // Solicitar datos al usuario
        printf("Ingrese el sexo (M/F): ");
        scanf_s(" %c", &sexo);

        // Verificar si el sexo es válido
        if (sexo == 'M' || sexo == 'F') {
            // Solicitar datos adicionales
            printf("Ingrese la edad: ");
            scanf_s("%d", &edad);

            // Verificar si la persona es mayor de 18 años
            if (edad >= 18) {
                printf("Ingrese la estatura en metros: ");
                scanf_s("%f", &estatura);
                printf("Ingrese el peso en libras: ");
                scanf_s("%f", &peso);

                // Calcular la dosis según el criterio
                if ((sexo == 'M' && estatura > 1.60 && peso >= 150) || (sexo == 'F' && estatura > 1.50 && peso >= 130)) {
                    dosis = 0.2 * estatura + 0.8 * peso;
                }
                else {
                    dosis = 0.3 * estatura + 0.7 * peso;
                }

                // Mostrar la dosis en gramos
                printf("La dosis recomendada es: %.2f gramos\n", dosis);
            }
            else {
                printf("La edad ingresada no es válida. La dosis solo es aplicable a personas mayores de 18 años.\n");
            }
        }
        else {
            printf("El sexo ingresado no es válido. Por favor, ingrese M o F.\n");
        }

        // Preguntar al usuario si desea repetir el proceso
        printf("¿Desea calcular la dosis para otro estudiante? (S/N): ");
        scanf_s(" %c", &sexo);
    } while (sexo == 'S' || sexo == 's');

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
