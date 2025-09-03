#include <stdio.h>

int main() {
    int b=0, i=0, exp=0, result=1;
    printf("entrer un nombre entier base :");
    scanf("%d",&b);
    printf("entrer un nombre entier exposant :");
    scanf("%d",&exp);
    for(i=1; i<=exp ; i++){
        result*=b;
    }
    printf(" le résultat est: %d", result);
    
 

    return 0;
}