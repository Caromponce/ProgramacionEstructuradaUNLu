/*2. Crear una función que reciba dos números enteros como parámetros,
realice la resta aritmética de ambos, y retorne el resultado de la resta.*/


#include <stdio.h>  

int restar(int a, int b){
    return a - b;
}

void main()
{
    int num1, num2, resultado;
    
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    
    resultado = restar(num1, num2);
    printf("El resultado de la resta es de: %d", resultado);
    return ; 
    
}