#include <stdio.h>
#include <string.h>

int main() {
    char T[200][50], A[200][50],R[200];//T désigne le tableau des titres et A pour les tableau des autreur respectives des livres
    int Q[200];//Q désigne le tableau des quantité en stock
    float P[200];//P désigne le tableau des prix des livres 
    int i,n,j,s=0, choix, compt1=0;
    
    //Menu d'affichage
        // Boucle infinie pour continuer jusqu'à la sortie
    while (1) { 
        //Option du menu:
        printf("***********Systeme de gestion de librairie*********** \n");
        printf("1. Ajouter un ou plusieurs livre (s) au stock. \n");
        printf("2. Afficher tous les livres disponibles dans le stock. \n");
        printf("3. Rechercher un livre par son titre \n");
        printf("4. Mettre à jour la quantité d'un livre dans le stock. \n");
        printf("5. Supprimer un livre du stock. \n");
        printf("6. Afficher le nombre total de livres en stock.\n");
        printf("7. Quitter le menu. \n");
        //Saisie du choix de l'utilisateur
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        
        //Code pour chaque option
        switch (choix) {
            //Ajout d'un ou plusieurs livre(s)
            case 1:
                printf ("le nombre des livres voulus entree dans la librairie \n");
                scanf("%d", &n);
                printf ("Entrer les informations pour chaque livre \n");
                for(i=compt1; i<n+compt1; i++){
                    printf("Entrer le titre du %d livre : ", i+1);
                    scanf("%s",T[i]);
                    printf("Entrer l auteur du %d livre : ", i+1);
                    scanf("%s",A[i]);
                    printf("Entrer le prix du %d livre : ", i+1);
                    scanf("%f",&P[i]);
                    printf("Entrer le quantite du %d livre : ", i+1);
                    scanf("%d",&Q[i]);
                    printf("\n");
                }
                compt1+=n;
                break;

                //Affichage de tous les livres dispo
            case 2:
                if (compt1==0){
                    printf("Aucun livre disponible dans le stock. \n");
                }else{
                    for(i = 0; i < compt1; i++){
                        printf("Le %d livre : \n", i + 1);
                        printf("Son titre: %s, son auteur: %s, sa quantite disponible: %d, son prix: %.2f Dh  \n", T[i], A[i], Q[i], P[i]);
                    }
                }
                break;
            //Recherche 
            case 3:
                printf("entrer le titre du livre a chercher: ");
                scanf("%s",R); //maitenant j'ai un problèm de chaine de caractère après je peux stockerle titre ds un tableau R PUIS creer une variable qui calcule le seize du Titre RECHERCHée pour être la limite de la boucle de comparaison.    
                for (i = 0; i < compt1; i++){
                        if(strcmp(T[i], R) == 0){
                            printf("Votre livre est repectorier comme le %d livre de la biblo \n", i + 1);
                        }
                        else{
                             printf("Malheureusement votre livre est indispensable \n");
                        }  
                    }
                break;
            case 4:
                printf("Entrer le titre et du livre a m.a.j: ");
                scanf("%s",R); //toujours le même problèm de chaine de cara.
                for (i=0;i<compt1; i++){
                    if(strcmp(T[i], R) == 0){
                        printf("Entrer la nouvelle valeur de la quantité: ");
                        scanf("%d",&Q[i]);
                    }
                }
                else{
                    printf("Je crois que vous etes trompe dans le titre reessayer plustard et merci");
                }
                break;
            case 5:
                printf("Entrer le titre du livre voulu etre supprimer:");
                scanf("%s",R);
                for (i=0;i<compt1; i++){
                    if(strcmp(T[i], R)){
                            T[j] = T[j+1];
                            A[j] = A[j+1];
                            Q[j] = Q[j+1];
                            P[j] = P[j+1];
                        }
                        printf("Le livre %d a été supprimer avec succes", i+1);  
                        compt1--;
                    }
                    else{
                        printf("Je crois que vous etes trompe dans le titre reessayer plustard et merci");
                    }
                }
                break; 
            case 6:
                for(i=0;i<compt1;i++){
                    s+=Q[i];
                }
                printf("Le nombre total des livres presents en stock est: %d ", s);
                break;
            case 7:
                // Sortir de la boucle
                printf("Merci d'avoir utilisé le programme. Au revoir !\n");
                return 0; // Quitte le programme
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }
}