#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100],chaine2[100];

    printf("Entrer la premiere chaine de caratere : ");
    scanf("%s", chaine1);
    printf("Entrer la deuxième chaine de caratere : ");
    scanf("%s", chaine2);
    strcat(chaine1,chaine2);
    printf("La chaîne résultante des deux chaines entrees est : %s \n", chaine1);
    
    return 0;
}