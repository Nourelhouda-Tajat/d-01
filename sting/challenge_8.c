#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int i, longueur;

    printf("Entrer la  chaine de caratere : ");
    scanf("%s", chaine);
    longueur = strlen(chaine);
    printf("La chaine de caratere en majuscule est : ");
    for(i=0; i<=longueur-1;i++){
        printf("%c", tolower(chaine[i]));
    }
    
    
    return 0;
}