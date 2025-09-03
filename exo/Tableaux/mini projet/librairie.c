#include <stdio.h>

int main() {
    char T[300], A[300];//T désigne le tableau des titres et A pour les tableau des autreur respectives des livres
    int Q[300];//Q désigne le tableau des quantité en stock
    float P[300];//P désigne le tableau des prix des livres 
    int i,n, compt1=0;
    //Ajout d'un ou plusieurs livre(s) 
    printf ("le nombre des livres voulus entree dans la librairie \n");
    scanf("%d", &n);
    n+=compt1;
    printf ("Entrer les informations pour chaque livre \n");
    for(i=compt1; i<n; i++){
        printf("Entrer le titre du %d livre : \n", i+1);
        scanf("%s",&T[i]);
        printf("Entrer l auteur du %d livre : \n", i+1);
        scanf("%s",&A[i]);
        printf("Entrer le prix du %d livre : \n", i+1);
        scanf("%f",&P[i]);
        printf("Entrer le quantite du %d livre : \n", i+1);
        scanf("%d",&Q[i]);
        compt1++;
    }
    //Affichage de tous les livres dispo
    for(i=0; i<compt1; i++){
        printf("Le %d livre : \n", i+1);
        printf("Son titre est : %s, son auteur est: %s \n", i+1, T[i]);

        printf("Entrer l auteur du %d livre : \n", i+1);
        scanf("%s",&A[i]);
        printf("Entrer le prix du %d livre : \n", i+1);
        scanf("%d",&P[i]);
        printf("Entrer le quantite du %d livre : \n", i+1);
        scanf("%f",&Q[i]);
        compt1++;
    }
    
    
    
    
    
    
    
    return 0;
}