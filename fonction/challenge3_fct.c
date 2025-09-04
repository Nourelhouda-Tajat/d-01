#include <stdio.h>

int MAX (int a, int b){
    printf("entrer a et b :");
    scanf("%d %d", &a,&b);
    if (a<b){
        return b;
    }
    return a;
}
int main() {
    int a,b;
    printf("Le maximum entre a et b est: %d",MAX(a,b));
    return 0;
}
