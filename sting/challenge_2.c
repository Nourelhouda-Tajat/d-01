#include <stdio.h>

int main() {
    char chaine[100];
    int longueur=0;
    
    printf("Entrer une chaine de caratere : ");
    scanf("%s", chaine);
    while (chaine[longueur] != '\0'){
        longueur++;
    }
    printf("La longueur de votre chaine est : %d \n", longueur);
    
    return 0;
}