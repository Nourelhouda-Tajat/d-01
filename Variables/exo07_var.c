#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;
    
    printf("Entrer le premier nombre  :  ");
    scanf("%lf", &a);
    printf("Entrer le deuxieme nombre  :  ");
    scanf("%lf", &b);
    printf("Entrer le troisième nombre  :  ");
    scanf("%lf", &c);
    printf("La ponderee des trois nombres donnes est : %lf ", ((a*2)+(b*3)+(c*5))/(2+3+5));

    return 0;
}