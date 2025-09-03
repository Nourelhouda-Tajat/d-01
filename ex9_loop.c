// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, c=0, compte=0;
    printf("entrer un entier positif : ");
    scanf("%d",&n);
    printf("le nombre de chiffre dans %d est %d", n, compte);
    while(n != 0){
        c=n%10;
        n/=10;
        compte++;
    }
    printf("%d", compte);


    return 0;
}