#include <stdio.h>

int multiplication (int a, int b){
    printf("entrer a et b :");
    scanf("%d %d", &a,&b);
    return a*b;
}
int main() {
    int a,b;
    printf("La somme de a et b est %d", multiplication(a,b));
    return 0;
}
