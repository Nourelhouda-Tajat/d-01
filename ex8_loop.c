// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=0, i, a=0, b=1, c=0 ;
    printf("entrer le nombre de termes de la suite de Fibonatcci : ");
    scanf("%d",&n);
    printf("les %d termes de la suite de Fibonatcci est : ", n);
    for (i=0; i<n; i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }


    return 0;
}