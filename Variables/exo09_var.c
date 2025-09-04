#include <stdio.h>
#include <math.h>

int main() {
    double a = 0, b = 0, c = 0, x =0, y = 0, z = 0 ;
    
    printf("Entrer les coordonnées du premier nombre  :  ");
    scanf("%lf  %lf %lf", &a, &b, &c);
    printf("Entrer les coordonnées du deuxieme nombre  :  ");
    scanf("%lf %lf %lf", &x, &y, &z);
    
    printf("La distance entre deux points donnés dans un espace 3D est : %lf ", sqrt((pow(x-a,2)+pow(y-b,2)+pow(z-c,2))));

    return 0;
}