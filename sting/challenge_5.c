#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i, longueur;

    printf("Entrer la  chaine de caratere : ");
    scanf("%s", chaine);
    longueur = strlen(chaine);
    printf("La chaine de caratere inversee est : ");
    for(i=longueur-1; i>=0;i--){
        printf("%c", chaine[i]);
    }
    
    
    return 0;
}