// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double a = 0, b = 0;
    
    printf("Entrer le nombre a :  ");
    scanf("%lf", &a);
    printf("Entrer le nombre b :  ");
    scanf("%lf", &b);
    printf("La somme des deux nobre a et b est : %lf ", a+b);
    printf("La soustraction des deux nobre a et b est : %lf ", a-b);
    printf("Le produit des deux nobre a et b est : %lf ", a*b);
    printf("Le division des deux nobre a et b est : %lf ", a/b);
    return 0;
}