#include <stdio.h>

int main() {
    double c = 0;
    
    printf("Entrer la temperature en Celsius:  ");
    scanf("%lf", &c);
    if (c<0){
        printf("L'etat de l'eau est solide");
    }
    else if (0<=c && c<100){
        printf("L'etat de l'eau est liquide");
    }
    else{
        printf("L'etat de l'eau est gaz");
    }
    return 0;
}