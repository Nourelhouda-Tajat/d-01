#include <stdio.h>

typedef struct {
    char titre [100];
    char auteur[100];
    int annee;
}livre;

livre afficheLivre(){
    livre l = {"crime_abc","Agatha_Christie", 1936};
    return l;
}

int main(){
    livre l = afficheLivre();
    printf("les informations du livre: **** Son titre: %s | son auteur: %s | son annee de publication %d ******",l.titre,l.auteur,l.annee);

    return 0; 
}