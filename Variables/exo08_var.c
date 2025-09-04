#include <stdio.h>
#include <math.h>

int main() {
    double a = 0, b = 0, c = 0;
    
    printf("Entrer le premier nombre  :  ");
    scanf("%lf", &a);
    printf("Entrer le deuxieme nombre  :  ");
    scanf("%lf", &b);
    printf("Entrer le troisième nombre  :  ");
    scanf("%lf", &c);
    printf("La moyenne geometrique des trois nombres saisis est : %lf ", pow((a*b*c),(1.0/3.0)));

    return 0;
}