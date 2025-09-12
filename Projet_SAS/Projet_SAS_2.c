#include <stdio.h>
#include <string.h>

#define Max 100

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m" /* definir les couleurs et les font*/
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define BOLD "\033[1m"

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
joueur equipe[Max];
int id = 1, cmpt = 0;

void initialisationJoueur()
{
    int i;
    joueur init_joueur[10] = {
        {1, "Messi", "LLionel", 10, "Attaquant", 38, 800},
        {2, "Ronaldo", "Cristiano", 7, "Attaquant", 40, 850},
        {3, "Mbappé", "Kylian", 7, "Attaquant", 26, 250},
        {4, "Modrić", "Luka", 10, "Milieu", 39, 50},
        {5, "De_Bruyne", "Kevin", 17, "Milieu", 34, 100},
        {6, "Van_Dijk", "Virgil", 4, "Defenseur", 34, 20},
        {7, "Hakimi", "Achraf", 2, "Defenseur", 26, 15},
        {8, "Courtois", "Thibaut", 1, "Gardien", 33, 0},
        {9, "Haaland", "Erling", 9, "Attaquant", 25, 200},
        {10, "Benzema", "Karim", 9, "Attaquant", 37, 450}};
    for (i = 0; i < 10; i++)
    {
        equipe[cmpt++] = init_joueur[i];
        id++;
    }
}

void ajout_joueur()
{
    int c;
    joueur j;
    if (cmpt >= Max)
    {
        printf("L equipe est pleine \n");
    }
    j.id = id++;
    printf("Entrer le nom du joueur: \n");
    scanf("%s", j.nom);
    printf("Entrer le prenom du joueur: \n");
    scanf("%s", j.prenom);
    printf("Entrer le numero du maillot du joueur: \n");
    scanf("%d", &j.n_maillot);
    printf("Choisir le poste du joueur: \n 1. Gardien   ||   2. Attaquant   ||   3. Defenseur   ||   4. Milieu \n ");
    scanf("%d", &c);
poste:
    switch (c)
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
    equipe[cmpt++] = j;
    printf("Ajout de joueur avec succes.\n");
}

void ajout_menu()
{
    int choix, n, i;
    do
    {
        printf("*******Option d ajout de joueur(s)******* \n");
        printf("1. Ajout d un joueur \n");
        printf("2. Ajout de plusieurs joueurs à la fois \n");
        printf("3. Retour au menu principal \n");
        printf("***************************************** \n");
        printf("Enter votre choix: ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajout_joueur();
            break;
        case 2:
            printf("Entrer le nombre des joueurs voulu ajouter: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                ajout_joueur();
            }
            break;
        case 3:
            printf("Retour vers le menu principal");

        default:
            printf("!!! Votre choix est invalide !!!  \n");
            break;
        }

    } while (choix != 3);
}
void affichage()
{
    int i;
    for (i = 0; i < cmpt; i++)
    {
        printf("|| %d  || %s  || %s  ||%d  || %s  || %d || %d ||\n", equipe[i].id, equipe[i].nom, equipe[i].prenom, equipe[i].n_maillot, equipe[i].poste, equipe[i].age, equipe[i].but);
    }
}
void affiche_ordre()
{
    int i, j;
    joueur temp;
    if (cmpt == 0)
    {
        printf("Il n existe pas de joueur! \n");
    }
    printf("*************La liste des joueurs par ordre alphabetique***************\n ");
    for (i = 0; i < cmpt - 1; i++)
    {
        for (j = 0; j < cmpt - i - 1; j++)
        {
            if (strcmp(equipe[j].nom, equipe[j + 1].nom) > 0)
            {
                temp = equipe[j];
                equipe[j] = equipe[j + 1];
                equipe[j + 1] = temp;
            }
        }
    }
    affichage();
}
void affiche_age()
{
    int i, j;
    joueur temp;
    if (cmpt == 0)
    {
        printf("Il n existe pas de joueur! \n");
    }
    printf("*************La liste des joueurs par age*************** ");
    for (i = 0; i < cmpt - 1; i++)
    {
        for (j = 0; j < cmpt - i - 1; j++)
        {
            if (equipe[j].age > equipe[j + 1].age)
            {
                temp = equipe[j];
                equipe[j] = equipe[j + 1];
                equipe[j + 1] = temp;
            }
        }
    }
    affichage();
}
void affiche_poste()
{
    int i, j;
    joueur temp;
    if (cmpt == 0)
    {
        printf("Il n existe pas de joueur! \n");
    }
    printf("*************La liste des joueurs par ordre alphabetique*************** ");
    for (i = 0; i < cmpt - 1; i++)
    {
        for (j = 0; j < cmpt - i - 1; j++)
        {
            if (strcmp(equipe[j].poste, equipe[j + 1].poste) > 0)
            {
                temp = equipe[j];
                equipe[j] = equipe[j + 1];
                equipe[j + 1] = temp;
            }
        }
    }
    affichage();
}
void affichage_menu()
{
    int choix;
    do
    {
        printf("*********** Option d affichage des joueurs ***************\n");
        printf("%s1%s. Affichage par ordre alphabetique\n", GREEN, RESET);
        printf("2. Affichage par age des joueurs\n");
        printf("3. Affichage par poste de joueur\n");
        printf("4. Retour au menu principal\n");
        printf("**********************************************************\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            affiche_ordre();
            break;
        case 2:
            affiche_age();
            break;
        case 3:
            affiche_poste();
            break;
        case 4:
            printf("Retour vers le menu principal");
            break;
        default:
            printf("!!!!!! Votre choix est invalide !!!!! \n");
            break;
        }

    } while (choix != 4);
}
int recherche_par_nom()
{
    int i, position;
    char trouveNom[50];
    printf("Entrer le nom du joueur a recherche :");
    scanf("%s", trouveNom);
    for (i = 0; i < cmpt; i++)
    {
        if (strcmp(trouveNom, equipe[i].nom) == 0)
        {
            printf("Trouve son ID: %d ||  son nom: %s || son prenom: %s || son numero de maillot : %d || son poste: %s || son age: %d || son score de buts: %d", equipe[i].id, equipe[i].nom, equipe[i].prenom, equipe[i].n_maillot, equipe[i].poste, equipe[i].age, equipe[i].but);
        }
        else
        {
            printf("Ce nom ne figure pas dans cet equipe");
            break;
        }
        position = i;
    }
    return position;
}
int recherche_par_Id()
{
    int i, position = 0, ind;
    printf("Entrer l identifiant du joueur a recherche :");
    scanf("%d", &ind);
    for (i = 0; i < cmpt; i++)
    {
        if (ind == equipe[i].id)
        {
            printf("Trouve son ID: %d ||  son nom: %s || son prenom: %s || son numero de maillot : %d || son poste: %s || son age: %d || son score de buts: %d", equipe[i].id, equipe[i].nom, equipe[i].prenom, equipe[i].n_maillot, equipe[i].poste, equipe[i].age, equipe[i].but);
            break;
            position = i;
            
        }
        return position;
    }
    printf("Cet identifiant ne figure pas dans cet equipe");
    return -1;
}
void recherche_menu()
{
    int choix;
    do
    {
        printf("*********** Option de recherche de joueur ***************\n");
        printf("1. Recherche par nom de joueur\n");
        printf("2. Recherche par identifiant de joueur\n");
        printf("3. Retour au menu principal\n");
        printf("***********************************************************\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            recherche_par_nom();
            break;
        case 2:
            recherche_par_Id();
            break;
        case 3:
            printf("Retour vers le menu principal.");
            break;
        default:
            printf("!!!!!! Votre choix est invalide !!!!!!");
        }
    } while (choix != 3);
}
void modifier_poste(int position)
{
    int choix;
poste:
    printf("Choisir le nouveau poste du joueur %d: \n 1. Gardien   ||   2. Attaquant   ||   3. Defenseur   ||   4. Milieu \n ", equipe[position].id);
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        strcpy(equipe[position].poste, "Gardien");
        break;
    case 2:
        strcpy(equipe[position].poste, "Attaquant");
        break;
    case 3:
        strcpy(equipe[position].poste, "Defenseur");
        break;
    case 4:
        strcpy(equipe[position].poste, "Milieu");
        break;
    default:
        printf("!!!! Votre choix est invalide !!!! \n ");
        goto poste;
        break;
    }
    printf("La modification a ete faite avec succes");
}
void modifier_age(int position)
{
    printf("Entrer le nouveau age du joueur %d: ", equipe[position].id);
    scanf("%d", &equipe[position].age);
    printf("La modification a ete faite avec succes"); // repition ds chaque fct
}
void modifier_numbBut(int position)
{
    printf("Entrer le nouveau numero des buts du joueur %d: ", equipe[position].id);
    scanf("%d", &equipe[position].but);
    printf("La modification a ete faite avec succes");
}
void modifier_menu()
{
    int choix, position;
    do
    {
        printf("*********** Option de modification de joueur ***************\n");
        printf("1. Modification du poste d un joueur \n");
        printf("2. Modification de l age d un joueur\n");
        printf("3. Modification du nombre de buts marques par un joueur\n");
        printf("4. Retour au menu principal\n");
        printf("***********************************************************\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            position = recherche_par_Id();
            if (position >= 0 && position < cmpt)
                modifier_poste(position);
            else
                printf("Joueur non trouve.\n");
            break;
        case 2:
            position = recherche_par_Id();
            if (position >= 0 && position < cmpt)
                modifier_age(position);
            else
                printf("Joueur non trouve.\n");
            break;
        case 3:
            position = recherche_par_Id();
            if (position >= 0 && position < cmpt)
                modifier_numbBut(position);
            else
                printf("Joueur non trouve.\n");
            break;
        case 4:
            printf("Retour vers le menu principal");
            break;
        default:
            printf("!!!! Choix invalide !!!!!");
        }
    } while (choix != 4);
}

void supprime_par_id()
{
    int position, i;
    position = recherche_par_Id();
    for (i = position; i < cmpt; i++)
    {
        equipe[i] = equipe[i + 1];
    }
    cmpt--;
}
void moyen_age()
{
    int total_age = 0, i;
    for (i = 0; i < cmpt; i++)
    {
        total_age += equipe[i].age;
    }
    printf("L age moyen des joureursde l equipe est : %d", total_age / (cmpt + 1));
}
void cmp_but()
{
    int i, n;
    printf("Entrer le but sueil : ");
    scanf("%d", &n);
    for (i = 0; i < cmpt; i++)
    {
        if (n < equipe[i].but)
        {
            printf("|| %d  || %s  || %s  ||%d  || %s  || %d || %d ||\n", equipe[i].id, equipe[i].nom, equipe[i].prenom, equipe[i].n_maillot, equipe[i].poste, equipe[i].age, equipe[i].but);
        }
        else
        {
            printf("Il n existe pas de joueur ayant marque ce nombre de but");
        }
    }
}

void meilleur_buteur()
{
    int i, n;
    for (i = 0; i < cmpt; i++)
    {
        if (equipe[i].but < equipe[i + 1].but)
        {
            n = i + 1;
        }
        else
            n = i;
    }
    printf("Le meilleur buteur est :\n || %d  || %s  || %s  ||%d  || %s  || %d || %d ||\n", equipe[n].id, equipe[n].nom, equipe[n].prenom, equipe[n].n_maillot, equipe[n].poste, equipe[n].age, equipe[n].but);
}
void joueur_age_jeune()
{
    int i, min, max;
    for (i = 0; i < cmpt; i++)
    {
        if (equipe[i].age < equipe[i + 1].age)
        {
            min = i;
            max = i + 1;
        }
        else
        {
            min = i + 1;
            max = i;
        }
    }
    printf("Le meilleur buteur est :\n || %d  || %s  || %s  ||%d  || %s  || %d || %d ||\n", equipe[min].id, equipe[min].nom, equipe[min].prenom, equipe[min].n_maillot, equipe[min].poste, equipe[min].age, equipe[min].but);
    printf("Le meilleur buteur est :\n || %d  || %s  || %s  ||%d  || %s  || %d || %d ||\n", equipe[max].id, equipe[max].nom, equipe[max].prenom, equipe[max].n_maillot, equipe[max].poste, equipe[max].age, equipe[max].but);
}

void statistique_menu()
{
    int choix;

    do
    {
        printf("*********** Option de Calcule de statistique  ***************\n");
        printf("1. Calcul du nombre total de joueurs dans l equipe \n");
        printf("2. Savoir l age moyen des joueurs de l equipe\n");
        printf("3. calcul du nombre des joueurs ayant marqué plus de X buts\n");
        printf("4. Savoir le meilleur buteur\n");
        printf("5. Savoir le joueur le plus jeune et le plus age\n");
        printf("6. Retour au menu principal\n");
        printf("***********************************************************\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            printf("Le total des joueurs dans l equipe est : %d", cmpt + 1);
            break;
        case 2:
            moyen_age();
            break;
        case 3:
            cmp_but();
            break;
        case 4:
            meilleur_buteur();
            break;
        case 5:
            joueur_age_jeune();
            break;
        case 6:
            printf("Retour vers le menu principal");
            break;
        default:
            printf(" !!!!! Votre choix est invalide !!!!!!!!!");
            break;
        }

    } while (choix != 6);
}
int main()
{
    int choix;
    initialisationJoueur();
    do
    {
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
            ajout_menu();
            break;
        case 2:
            affichage_menu();
            break;
        case 3:
            recherche_menu();
            break;
        case 4:
            modifier_menu();
            break;
        case 5:
            supprime_par_id();
            break;
        case 6:
            statistique_menu();
            break;

        default:
            break;
        }
    } while (choix != 7);

    return 0;
}
