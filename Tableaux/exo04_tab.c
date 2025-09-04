#include <stdio.h>

int main() {
    int tab[300];
    int i,n=0, max=0;
    printf("longeur du tableau d'entier (ne pas depasser 100) : ");
    scanf("%d",&n);
    printf("entrer les valeurs du tableau d'entiers : \n");
    max=tab[0];
    for (i=0; i<n; i++){
        scanf("%d",&tab[i]);
    }
    for (i=1; i<n; i++){
        if (max<tab[i]){
            max=tab[i];
        }
        
    }
    printf("le plus grand nombre des valeurs du tableau est : %d \n", max);
    


    return 0;
}