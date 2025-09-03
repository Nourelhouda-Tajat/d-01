#include <stdio.h>

int main() {
    int nbr = 0, i=0, produit=0;
    printf("Ecris un nomber");
    scanf("%d",&nbr);
    printf("La table de multiplication de %d \n",nbr);
    for (i=1; i<=10; i++){
        produit = nbr*i;
        printf("%d * %d = %d \n",nbr,i,produit);
    }

    return 0;
}