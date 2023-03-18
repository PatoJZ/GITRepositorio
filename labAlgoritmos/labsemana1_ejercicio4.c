#include <stdio.h>

void jugadasDeGato(){
    system("cls");
    printf("Bienvenido a GranGato!\n");
    printf("|X| |-| |-|\n");
    printf("|-| |-| |-|\n");
    printf("|-| |-| |-|\n");
    sleep(3);
    system("cls");
    printf("Jugador 1 empieza!\n");
    printf("|X| |-| |-|\n");
    printf("|-| |-| |-|\n");
    printf("|-| |-| |-|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 2\n");
    printf("|X| |-| |-|\n");
    printf("|-| |O| |-|\n");
    printf("|-| |-| |-|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 1\n");
    printf("|X| |-| |-|\n");
    printf("|-| |O| |-|\n");
    printf("|-| |-| |X|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 2\n");
    printf("|X| |-| |-|\n");
    printf("|-| |O| |-|\n");
    printf("|O| |-| |X|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 1\n");
    printf("|X| |-| |X|\n");
    printf("|-| |O| |-|\n");
    printf("|O| |-| |X|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 2\n");
    printf("|X| |-| |X|\n");
    printf("|O| |O| |-|\n");
    printf("|O| |-| |X|\n");
    sleep(2);
    system("cls");

    printf("turno de jugador 1\n");
    printf("|X| |X| |X|\n");
    printf("|O| |O| |-|\n");
    printf("|O| |-| |X|\n");
    sleep(2);
    system("cls");

    printf("!Jugador 1 Gana!\n");
    printf(">|X| |X| |X|< Gato!\n");
    printf(" |O| |O| |-|\n");
    printf(" |O| |-| |X|\n");
    sleep(2);
    system("cls");
}

int main(){
    jugadasDeGato();
    return 0;
}
