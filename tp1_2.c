#include <stdio.h>

int funcionCuadrado(int num);
void cuadrado(int num);
void invertir(int a,int b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int a, int b);

int main(){
    int num, resultado;
    printf("Ingresar un num del 1 al 100: ");
    scanf("%d", &num);

    // a) Haga una función que devuelva el cuadrado de un número
    resultado = funcionCuadrado(num);
    printf("\nEl cuadrado de %d es: %d", num, resultado);

    // b) Haga la función anterior, pero devolviendo un tipo void
    int num2;
    printf("\nIngresar un 2do numero: ");
    scanf("%d", &num2);
    cuadrado(num2);

    // c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    printf("\nDireccion de memoria de num2: %p", &num2);
    printf("\nCOntenido de num2: %d", num2);

    // d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    printf("\nValores antes de invertir ---> A:%d y B:%d", num, num2);
    invertir(num, num2);

    // e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
    orden(num,num2);

    return 0;
}

int funcionCuadrado(int num){
    int aux;
    aux = num * num;
    return aux;
}

void cuadrado(int num){
    int aux;
    aux = num * num;
    printf("\nEl cudrado de %d es: %d", num, aux);
}

void invertir(int a,int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("\nValor invertido ---> A:%d y B:%d", a, b);
}

void orden(int a, int b){
    if (a < b)
    {
        printf("\nDe menor a mayor. %d - %d", a, b);
    } else
    {
        printf("\nDe menor a mayor. %d - %d", b, a);
    }
}