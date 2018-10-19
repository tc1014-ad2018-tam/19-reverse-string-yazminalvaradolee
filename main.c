/*
 * Este programa le ayudara al usuario a saber lo que escribio en una oracion
 * escrito al reves
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 18 de oct del 2018
 */
#include <stdio.h>
#include <string.h>

int main() {
    //VARIABLES
    char string[100];


    printf("Escribe una oracion:");
    fgets(string, sizeof(string), stdin);


    printf("Tu texto al reves es:");

    //OPERACIONES PARA SACAR LA ORACION AL REVES
    for (int i = strlen(string); i > 0; i--) {
        printf("%c", string[i - 1]);
    }

    return 0;
}