/*3. Crear una función que reciba dos números enteros como parámetros,
realice el producto de ambos, y retorne el resultado del producto..*/

#include <stdio.h>
int multiplicacion(int a, int b){
    return a * b;    
}

int main()
{
    int num1, num2, resultado;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese otro número entero: ");
    scanf("%d", &num2);
    
    resultado = multiplicacion(num1, num2);
    printf("El resultado de la multiplicacion entre %d y %d es %d", num1, num2, resultado);
    return 0;
}
