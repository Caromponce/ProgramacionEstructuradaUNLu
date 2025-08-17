/* Ejercicio 5: Escribir una función que procese las notas de los dos parciales
de un alumno inscriptos en Programación Estructurada. La función recibe las dos
}notas del alumno y calcula el promedio de las notas.. La función debe retornar
un entero que identifique la condición del alumno: 1 = PROMOVIDO; 2 = REGULAR; 
3 = LIBRE.
Las reglas para saber la situación de un alumno son las siguientes:
Para ser promovido (es decir, cursada aprobada y no requiere rendir ﬁnal), el 
alumno debe haber aprobado ambos parciales y tener un promedio mayor o igual a 7.
Para estar regular (cursada aprobada, pero debe rendir ﬁnal), el alumno debe 
haber aprobado ambos parciales (nota mayor o igual a 4).
Si el alumno no ha aprobado ambos parciales (es decir, tiene nota menor que 4 en
alguno de ellos), entonces queda en condición de libre (es decir, puede rendir un 
ﬁnal extendido o recursar).*/


#include <stdio.h>

/* -------- Declaro funciones -------- */
int calcularPromedio(int primer_notas, int segunda_nota);
int procesarNotas(int promedio, int primer_nota, int segunda_nota);

/* -------- Asigno Funciones -------- */
int calcularPromedio(int primer_nota, int segunda_nota){
    int promedio = (primer_nota + segunda_nota) / 2;
    return promedio;
}

int procesarNotas(int promedio, int primer_nota, int segunda_nota){
    int condicion;
    if (primer_nota >= 4 && segunda_nota >= 4){
        if (promedio > 7){
            condicion = 0; // Prommovido
        } else {
            condicion = 1; // Regular
        }
    } else {
        condicion = 2; // Libre
    }
    return condicion;
}


/* -------- Main -------- */
int main() {
    int primer_nota, segunda_nota, promedio, condicion_final;
    printf("Ingrese la nota del primer parcial: ");
    scanf("%d", &primer_nota);
    printf("Ingrese la nota del segundo parcial: ");
    scanf("%d", &segunda_nota);
    
    promedio = calcularPromedio(primer_nota, segunda_nota);
    printf("El promedio entre la primer nota %d y la segunda nota %d es de %d \n", primer_nota, segunda_nota, promedio);
    
    condicion_final = procesarNotas(promedio, primer_nota, segunda_nota);
    
    switch (condicion_final){
        case 0:
            printf("Promovido");
            break;
        case 1:
            printf("Regular");
            break;
        case 2:
            printf("Libre");
            break;
        default:
        printf("Opción Inválida");
    }
    
    return 0;
}