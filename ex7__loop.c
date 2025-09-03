// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, c=0 ;
    printf("entrer un entier positif : ");
    scanf("%d",&n);
    printf("l'inverse de %d est : ", n);
    while(n != 0){
        c=n%10;
        printf("%d",c);
        n/=10;
    }


    return 0;
}