#include <stdio.h>
#include <string.h>

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
        printf("!!!! Votre choix est invalide !!!! \n ");
        goto poste;
        break;
    }
    printf("Entrer l age du joueur: \n");
    scanf("%d", &j.age);
    printf("Entrer le nombre de but(s) marques par le joueur: \n");
    scanf("%d", &j.but);
    j.id = id;
    id++;
    return j;
}
int recherche_par_nom (char trouveNom[50]){
    int i;
    char c;
    for(i=0; i<cmpt; i++){
        if(strcmp(trouveNom,equipe[i].nom)=0){
            printf("Le joueur cherche correspond au joueur %d", equipe[i].id);
            printf("Voulez-vous tous ces information (y/n)");
            scanf("%c",c);
            if(c='y')
            printf("Le joueur recherche a comme ID: %d ||  son nom: %s || son prenom: %s || son numero de maillot : %d || son poste: %s || son age: %d || son score de buts: %d", equipe[i].id, equipe[i].nom, equipe[i].prenom, equipe[i].n_maillot, equipe[i].poste, equipe[i].age, equipe[i].but);
        }
    }
}

int main()
{
    int choix, c1, n, i, ind = 10;
    joueur j[100];

    do {
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
            do {
            menu:
                printf("*******Option d ajout de joueur(s)******* \n");
                printf("1. Ajout d un joueur \n");
                printf("2. Ajout de plusieurs joueurs à la fois \n");
                printf("3. Retour au menu principal \n");
                printf("***************************************** \n");
                printf("Enter votre choix: ");
                scanf("%d", &c1);

                switch (c1)
                {
                case 1:
                    j[ind] = ajouter_joueur();
                    ind++;
                    break;
                case 2:
                    printf("Entrer le nombre des joueurs voulu ajouter: ");
                    scanf("%d", &n);
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
            } while (c1 != 3);
            break;

        case 2:
            for (i = 10; i < ind; i++) {
                printf("le nom du joueur est %s, son prenom %s, son id %d, son num de maillot %d, son poste %s, son numero de but est %d\n",
                       j[i].nom, j[i].prenom, j[i].id, j[i].n_maillot, j[i].poste, j[i].but);
            }
            break;

        default:
            break;
        }
    } while (choix != 7);

    return 0;
}
