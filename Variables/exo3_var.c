#include <stdio.h>

int main() {
    double k = 0;
    
    printf("Entrer la distance en kilometre: ");
    scanf("%lf", &k);
    printf("La distance en yards est : %lf ", k*1093.61);
    return 0;
}