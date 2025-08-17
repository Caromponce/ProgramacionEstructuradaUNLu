/*1. Crear una función que reciba dos números enteros como parámetros,
realice la suma aritmética de ambos, y retorne el resultado de la suma.
*/

#include <stdio.h>  

int sumar(int a, int b){
    return a + b;
}

int main(void)  
{
    int num1, num2, resultado;
    
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    
    resultado = sumar(num1, num2);
    printf("El resultado de la suma es de: %d", resultado);
    return 0; 
    
}