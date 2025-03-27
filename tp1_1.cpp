#include <stdio.h>

int main() {
    printf("hola mundo");

    int num = 5;

    int *punt;

    punt = &num;

    printf("El contenido del puntero es: %d\n", *punt);

    printf("La direccion de memoria almacenada por el puntero: %p\n", punt);

    printf("La direccion de memoria de la variable: %p\n", &num);

    printf("La direccion de memoria del puntero: %p\n", &punt);

    printf("El tamanio de la variable es: %d\n", sizeof(num));

    return 0;
}