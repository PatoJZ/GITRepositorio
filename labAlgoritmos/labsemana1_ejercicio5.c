#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generar_pieza(int piezaTetris_anterior) {
    int pieza_nueva;
    
    do {
        pieza_nueva = rand() % 7; 
    } while (pieza_nueva == piezaTetris_anterior);
    
    return pieza_nueva;
}
int main() {
   
    srand(time(NULL));
    
    int piezaTetris_anterior = -1;  
    int pieza_actual;
    
    for (int i = 0; i < 10; i++) {
        pieza_actual = generar_pieza(piezaTetris_anterior);
        printf("Pieza %d: %d\n", i+1, pieza_actual);
        piezaTetris_anterior = pieza_actual;
    }
    
    return 0;
}
