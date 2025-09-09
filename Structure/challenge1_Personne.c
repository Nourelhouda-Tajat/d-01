#include <stdio.h>

struct personne{
    char nom[100];
    char prenom[100];
    int age;
};

int main(){
    struct personne p[50];
    int i,n;
    
    printf("Entrer le nombre de personne a representer: ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("Entrer le nom la %d personne: ", i+1);
        scanf("%s",p[i].nom);
        printf("Entrer le prenom la %d personne: ", i+1);
        scanf("%s",p[i].prenom);
        printf("Entrer l age la %d personne: ", i+1);
        scanf("%d",&p[i].age);
    }
    for (i=0; i<n; i++){
        printf("Les informations de la %d personne sont:\n son nom: %s | son prenom: %s | son age: %d \n",i+1, p[i].nom, p[i].prenom, p[i].age);
    }
    
    
}