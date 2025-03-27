#include <stdio.h>

// DECLARACION DE MODULOS
int cuadrado(int num);
void cuadradoVoid(int num, int *cuadrado);
void direccionContenido(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);


int main() {
    // -- PROGRAMA DE PRUEBA DE LISTA CON FUNCIONES QUE RETORNAN LA LISTA MODIFICADA
    printf("\nINICIO DEL PROGRAMA DE PRUEBA\n");
    printf("\na). Funcion que devuelve el cuadrado de un numero: \n");
    printf("Ingrese el numero a calcular: \n");
    int num;
    int elCuadrado;
    scanf("%d", &num);
    elCuadrado = cuadrado(num);
    printf("El cuadrado de %d es: %d\n", num, elCuadrado);

    printf("\nb). Funcion que devuelve el cuadrado de un numero: \n");
    cuadradoVoid(num, &elCuadrado);

    printf("\nc). Funcion que devuelve la direccion de memoria de un numero: \n");
    direccionContenido(num);

    printf("\nd). Funcion que intercambia los valores de dos numeros: (A y B) \n");
    int a, b;
    printf("Ingrese el primer numero (A): \n");
    scanf("%d", &a);
    printf("Ingrese el segundo numero (B): \n");
    scanf("%d", &b);
    invertir(&a, &b);
    printf("El numero A es: %d\n", a);
    printf("El numero B es: %d\n", b);

    printf("\ne). Funcion que ordena dos numeros de menor a mayor: (A y B) \n");
    orden(&a, &b);
    printf("El numero A es: %d\n", a);
    printf("El numero B es: %d\n", b);

    printf("\nFIN DEL PROGRAMA DE PRUEBA\n");

    return 0;
}

// DEFINICION DE MODULOS
int cuadrado(int num) {
    return num * num;
}

void cuadradoVoid(int num, int *cuadrado) {
    *cuadrado = num * num;
    printf("El cuadrado de %d es: %d\n", num, *cuadrado);
}

void direccionContenido(int num) {
    printf("La direccion de memoria de %d es: %p\n", num, &num);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}