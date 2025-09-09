#include <stdio.h>
#include <string.h>

int main() {
    char chaine[1000];
    char sansEspaces[1000];
    int i, j = 0;

    // Lecture de la chaîne
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Suppression du saut de ligne éventuellement présent
    chaine[strcspn(chaine, "\n")] = '\0';

    // Suppression des espaces
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') {
            sansEspaces[j] = chaine[i];
            j++;
        }
    }
    sansEspaces[j] = '\0';  // Fin de chaîne

    // Affichage du résultat
    printf("Chaîne sans espaces : %s\n", sansEspaces);

    return 0;
}
