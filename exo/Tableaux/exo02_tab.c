#include <stdio.h>

int main() {
    int tab[300];
    int i,n=0;
    printf("longeur du tableau d'entier (ne pas depasser 100) : ");
    scanf("%d", &n);
    printf("entrer les valeurs du tableau d'entiers : \n");
    for (i=0; i<n; i++){
        scanf("%d",&tab[i]);
    }
    printf("les valeurs du tableau d'entiers sont : \n");
    for (i=0; i<n; i++){
        printf("%d \n", tab[i]);
    }


    return 0;
}