#include <stdio.h>

void barraDeCarga(){
    int i;

    for (i=0; i<=100; i++){
        if (i > 10 && i < 20){
        printf("\rProgreso: [%-10s] %d%%", "#", i);    
        }
         if (i > 20 && i < 30 ){
        printf("\rProgreso: [%-10s] %d%%", "##", i);    
        }
         if (i > 30 && i < 40){
        printf("\rProgreso: [%-10s] %d%%", "###", i);    
        }
         if (i > 40 && i < 50){
        printf("\rProgreso: [%-10s] %d%%", "####", i);    
        }
         if (i > 50 && i < 60){
        printf("\rProgreso: [%-10s] %d%%", "#####", i);    
        }
         if (i > 60 && i < 70){
        printf("\rProgreso: [%-10s] %d%%", "######", i);    
        }
         if (i > 70 && i < 80){
        printf("\rProgreso: [%-10s] %d%%", "#######", i);    
        }
         if (i > 80 && i < 90){
        printf("\rProgreso: [%-10s] %d%%", "########", i);    
        }
         if (i > 90 && i < 100){
        printf("\rProgreso: [%-10s] %d%%", "#########", i);    
        }
        if (i >= 100){
        printf("\rProgreso: [%-10s] %d%%", "##########", i);    
        }
        fflush(stdout);
        usleep(100000);
    }
        printf("\nlisto!");
}
int main(){
    barraDeCarga();
    return 0;
}
