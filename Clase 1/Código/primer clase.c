// Primer clase:

// --> Así se incluyen archivos con funciones.
// sdtio.h es una biblioteca que trae funciones de i/o como printf.

#include <stdio.h>  


// Void --> indica que no recibe parámetros
// También se puede declarar la función main() sin void.
int main(void)  
{
    printf("Hello World");

    return 0; 
    /* return 0 --> es una convención estandar para indicar que el programa
    terminó sin errores y se ejecutó correctamente. */
}