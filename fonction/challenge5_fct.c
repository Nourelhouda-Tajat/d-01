#include <stdio.h>

int Factorielle (int a){
    int i, result=1;
    printf("entrer un nombre entier positif :");
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        result*=i;
    }
    return result;
    
}
int main() {
    int a;
    printf("La factorielle de a: %d",Factorielle(a));
    return 0;
}
