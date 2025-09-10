#include <stdio.h>

int Somme (int a, int b){
    printf("entrer a et b :");
    scanf("%d %d", &a,&b);
    int som=a+b;
    return som;
}
int main() {
    int a,b;
    printf("La somme de a et b est %d", Somme(a,b));
    return 0;
}
