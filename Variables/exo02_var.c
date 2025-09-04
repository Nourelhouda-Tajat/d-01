#include <stdio.h>

int main() {
    float c = 0;
    
    printf("Entrer la température en Celsius: ");
    scanf("%f", &c);
    printf("La temperature en kelvin est : %f ", c + 273.15 );
    return 0;
}