#include <stdio.h>

int main (){
    puts("Hola Mundo");

    int var = 5;
    int *puntvar = &var;

    //El contenido del puntero
    printf("\nContenido del puntero: %d", *puntvar);

    //La direccion de memoria almacenada por el puntero
    printf("\nLa direccion de memoria almacenada por el puntero: %p", puntvar);

    //La direccion de memoria de la variable
    printf("\nLa direccion de memoria de la variable: %p", &var);

    //La direccion de memoria del puntero
    printf("\nLa direccion de memoria del puntero: %p", &puntvar);

    //El tamaño de memoria utilizado por esa variable usando la funcion sizeof()
    printf("\nEl tamanio de memoria utilizado por la variable: %zu bytes", sizeof(var));

    return 0;
}