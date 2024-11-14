/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad de No Cola(Fibonacci)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 13 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <stdio.h>
#include "operaciones.h"

int main() {
    int n;

    // Solicita al usuario que ingrese un número entero no negativo
    printf("Introduce un número entero no negativo para calcular el término de Fibonacci: ");
    while (scanf("%d", &n) != 1 || n < 0) {  // Validación: solo acepta enteros no negativos
        printf("Entrada no válida. Introduce un número entero no negativo: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    printf("Fibonacci de %d: %d\n", n, fibonacci(n));
    return 0;
}
