#include <stdio.h>
#include <string.h>
/*Ajouter un joueur :
Ajouter un nouveau joueur.
Ajouter plusieurs joueurs en une seule opération.
Un joueur est défini par :
Un id unique: généré automatiquement pour identifier chaque joueur (évite les doublons).
Son nom et prenom : strings pour stocker l’identité.
numeroMaillot : un entier pour identifier le joueur sur le terrain.
poste : permet de distinguer les rôles (gardien, défenseur, milieu, attaquant).
age : utile pour les tris et statistiques.
buts : nombre de buts marqués par le joueur.
dateInscription (bonus) : fixée à l’ajout du joueur, non modifiable.
statut (bonus) : indique si le joueur est "titulaire" ou "remplaçant". */
typedef struct
{
    int id;
    char nom[50];
    char prenom[50];
    int n_maillot;
    char poste[15];
    int age;
    int but;
} joueur;
joueur ajouter_joueur()
{
    int p, id = 10;
    joueur j;
    printf("Entrer le nom du joueur: \n");
    scanf("%s", j.nom);
    printf("Entrer le prenom du joueur: \n");
    scanf("%s", j.prenom);
    printf("Entrer le numero du maillot du joueur: \n");
    scanf("%d", &j.n_maillot);
    printf("Choisir le poste du joueur: \n 1. Gardien   ||   2. Attaquant   ||   3. Defenseur   ||   4. Milieu \n ");
    scanf("%d", &p);
poste:
    switch (p)
    {
    case 1:
        strcpy(j.poste, "Gardien");
        break;
    case 2:
        strcpy(j.poste, "Attaquant");
        break;
    case 3:
        strcpy(j.poste, "Defenseur");
        break;
    case 4:
        strcpy(j.poste, "Milieu");
        break;
    default:
        printf("!!!! Votre choix est invalide !!!! \n "); // veuillez de la liste du choix
        goto poste;
        break;
    }
    printf("Entrer l age du joueur: \n");
    scanf("%d", &j.age);
    printf("Entrer le nombre de but(s) marques par le joueur: \n");
    scanf("%d", &j.but);
    id++;
    return j;
}

int main()
{
    int choix, c1, n, i, ind = 10;
    joueur j[100];
Menu:
    printf("********Gestion d une Equipe de Football******** \n");
    printf("1. Ajouter un ou plusieurs joueur(s) \n");
    printf("2. Afficher la liste de tous les joueurs \n");
    printf("3. Rechercher un joueur \n");
    printf("4. Modifier un joueur \n");
    printf("5. Supprimer un joueur \n");
    printf("6. Demander des statistiques \n");
    printf("7. Quitter le menu \n");
    printf("************************************************ \n");
    printf("Entrer votre choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
    menu:
        printf("*******Option d ajout de joueur(s)******* \n");
        printf("1. Ajout d un joueur \n");
        printf("2. Ajout de plusieurs joueurs à la fois \n");
        printf("3. Retour au menu principal \n");
        printf("***************************************** \n");
        printf("Enter votre choix: ");
        scanf("%d", choix);
        switch (choix)
        {
        case 1:
            j[ind] = ajouter_joueur();
            ind++;
            break;
        case 2:
            printf("Entrer le nombre des joueurs voulu ajouter: ");
            scanf("%d", n);
            for (i = ind; i < ind + n; i++)
            {
                j[i] = ajouter_joueur();
            }
            ind += n;
            break;
        case 3:
            goto Menu;

        default:
            printf("!!! Votre choix est invalide !!!  \n");
            goto menu;
            break;
        }

        break;

    default:
        break;
    }
}
