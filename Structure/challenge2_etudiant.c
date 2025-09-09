#include <stdio.h>

struct etudiant{
    char nom[100];
    char prenom[100];
    float note[100];
};

int main(){
    struct etudiant e[50];
    int i,n,j,m;
    
    printf("Entrer le nombre de etudiant a representer: ");
    scanf("%d",&n);
    printf("Entrer le nombre de note a remplir pour chaque etudiant: ");
    scanf("%d",&m);
    for (i=0; i<n; i++){
        printf("Entrer le nom du %d etudiant: ", i+1);
        scanf("%s",e[i].nom);
        printf("Entrer le prenom du %d etudiant: ", i+1);
        scanf("%s",e[i].prenom);
        for(int j=0; j<m;j++){
            printf("Entrer la %d note du %d etudiont: ",j+1, i+1);
            scanf("%f",&e[i].note[j]);
        }
        
    }
    for (i=0; i<n; i++){
        printf("Les informations du %d etudiant sont:\n son nom: %s | son prenom: %s | ses notes: \t",i+1, e[i].nom, e[i].prenom);
        for(j=0;j<m; j++){
            printf("%2.f \t | \t",e[i].note[j]);
        }
        printf("\n");
    }
    
    return 0;
}