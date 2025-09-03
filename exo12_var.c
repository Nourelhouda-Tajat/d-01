#include <stdio.h>

int main() {
    int n = 0, m = 0, c = 0, d = 0 , u = 0;

    printf("Entrer un nombre entier à 4 chiffres : ");
    scanf("%d", &n);
    m = n / 1000;           
    c = (n / 100) % 10;       
    d = (n / 10) % 10;         
    u = n % 10;                
    
    printf("%d%d%d%d\n", u, d, c, m);

    return 0;
}
