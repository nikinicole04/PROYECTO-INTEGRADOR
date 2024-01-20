// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define MAX_ESTUDIANTES 100

int main() {
    char sexo;
    float estudiantes[MAX_ESTUDIANTES][4]; // 2D array para almacenar peso, altura, edad y sexo
    int numEstudiantes = 0;

    do {
        printf("Ingrese la edad: ");
        scanf_s("%f", &estudiantes[numEstudiantes][0]);

        // Verificar si el estudiante es mayor de 18 a�os
        if (estudiantes[numEstudiantes][0] < 18) {
            printf("El estudiante debe ser mayor de 18 a�os para calcular la dosis de vitaminas.\n");
            continue;
        }

        printf("Ingrese el peso en lb: ");
        scanf_s("%f", &estudiantes[numEstudiantes][1]);

        printf("Ingrese la altura en m: ");
        scanf_s("%f", &estudiantes[numEstudiantes][2]);

        printf("Ingrese el sexo (M/F): ");
        scanf_s(" %c", &sexo);
        estudiantes[numEstudiantes][3] = sexo;

        numEstudiantes++;

        if (numEstudiantes >= MAX_ESTUDIANTES) {
            printf("Se alcanz� el l�mite m�ximo de estudiantes.\n");
            break;
        }

        printf("�Desea ingresar datos para otro estudiante? (S/N): ");
        scanf_s(" %c", &sexo);
    } while (sexo == 'S' || sexo == 's');

    printf("\nResultados:\n");

    for (int i = 0; i < numEstudiantes; i++) {
        float dosis;
        float edad = estudiantes[i][0];
        float peso = estudiantes[i][1];
        float altura = estudiantes[i][2];
        char sexo = estudiantes[i][3];

        if (edad >= 18) {
            if ((sexo == 'M' || sexo == 'm') && altura > 1.60 && peso >= 150) {
                dosis = 0.20 * altura + 0.80 * peso;
            }
            else if ((sexo == 'M' || sexo == 'm') && (altura <= 1.60 || peso < 150)) {
                dosis = 0.30 * altura + 0.70 * peso;
            }
            else if ((sexo == 'F' || sexo == 'f') && altura > 1.50 && peso >= 130) {
                dosis = 0.25 * altura + 0.75 * peso;
            }
            else {
                dosis = 0.35 * altura + 0.65 * peso;
            }

            printf("Estudiante %d - La dosis recomendada es: %.2f gramos\n", i + 1, dosis);
        }
        else {
            printf("Estudiante %d - La cantidad de vitaminas solo es aplicable a personas mayores de 18 a�os y con los requisitos especificados.\n", i + 1);
        }
    }

    printf("Programa finalizado.\n");

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
