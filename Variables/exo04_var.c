#include <stdio.h>

int main() {
    double v = 0;
    
    printf("Entrer  la vitesse en kilometres par heure: ");
    scanf("%lf", &v);
    printf("La vitesse en metres par seconde est : %lf m/s", v*0.27778);
    return 0;
}