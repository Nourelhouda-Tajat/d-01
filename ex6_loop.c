#include <stdio.h>

int main() {
    int n=0, i=0;
    printf("entrer un nombre entier positif :");
    scanf("%d",&n);
    printf("les %d premiers nombres impair:",n);
    for(i=1; i<=n ; i++){
        printf("%d ", 2*i);
    }
    
 

    return 0;
}