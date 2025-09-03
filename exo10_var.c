// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    double r = 0 ;
    const double Pi = 3.141592653589;
    
    printf("Entrer le rayon de la sphere :  ");
    scanf("%lf",&r);
    printf("Le volume de la sphere est : %lf ", ((4.0/3.0)*Pi*pow(r,3)));

    return 0;
}