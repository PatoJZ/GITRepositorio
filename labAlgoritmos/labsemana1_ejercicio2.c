#include <stdio.h>

void operacion(int a, float b){
    switch(a){
        case 0:
            b = b + 10;
            break;
        case 1:
            b = b - 10;
            break;
        case 2:
            b = b * 10;
            break;
        case 3: 
            b = b / 10;
            break;
        
        default:
            break;
    }
    printf("el resultado es %2f", b);
}
int main(){
    float numero;
    int opcion;

    printf("ingrese numero para aplicar operacion\n");
    scanf("%f",&numero);

    printf("seleccione operacion aritmetica\n");
    printf("[0] sumar 10\n");
    printf("[1] restar 10\n");
    printf("[2] multiplicar por 10\n");
    printf("[3] dividir por 10\n");
    scanf("%d",&opcion);
    while(opcion>3 && opcion<0){
        printf("error\n");
        printf("seleccione operacion aritmetica\n");
        printf("[0] sumar por 10\n");
        printf("[1] restar por 10\n");
        printf("[2] multiplicar por 10\n");
        printf("[3] dividir por 10\n");
        scanf("%d",&opcion);
    }

    operacion(opcion,numero);

}