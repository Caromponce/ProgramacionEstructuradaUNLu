/* Ejericio 8: Escriba un programa que llame a la función anterior, en un ciclo
infinito, con un entero aleatorio entre 0 y 10. El ciclo debe terminar cuando 
el entero aleatorio sea el número 9. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* -------- Declarar Funciones -------- */
void seleccionarBomba(int tipo_bomba);

/* -------- Asignar Funciones -------- */
void seleccionarBomba(int tipo_bomba){
    switch(tipo_bomba){
        case 0:
            printf("No hay establecido un valor definido para el tipo de bomba.");
            break;
        case 1:
            printf("La bomba es una bomba de agua.");
            break;
        case 2:
            printf("La bomba es una bomba de gasolina.");
            break;
        case 3:
            printf("La bomba es una bomba de hormigón.");
            break;
        case 4:
            printf("La bomba es una bomba de pasta alimenticia.");
            break;
        default:
            printf("No existe un valor válido para tipo de bomba.");
            break;
    }
    return;
}


/* -------- Main -------- */
int main()
{
    int b;
    srand(time(NULL));
    b = rand()%(9+1);
    while(b != 9){
        seleccionarBomba(b);
        b = rand()%(9+1);
        printf("%d \n", b);
    }
    
    
    
    
    return 0;
}
