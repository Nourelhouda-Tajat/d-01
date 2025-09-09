// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char cara;
    int i, longueur,compteur=0;

    printf("Entrer la  chaine de caratere : ");
    scanf("%s", chaine);
    printf("Entrer le caratere : ");
    scanf(" %c", &cara);
    longueur = strlen(chaine);
    for(i=0; i<longueur;i++){
        if(chaine[i]==cara){
            compteur++;
        }
    }
    printf("Le nombre de fois d apparition de %c est : %d", cara,compteur);
    
    
    return 0;
}