#include <stdio.h>

int MIN (int a, int b){
    printf("entrer a et b :");
    scanf("%d %d", &a,&b);
    if (a<b){
        return a;
    }
    return b;
}
int main() {
    int a,b;
    printf("Le minimum entre a et b est: %d",MIN(a,b));
    return 0;
}
