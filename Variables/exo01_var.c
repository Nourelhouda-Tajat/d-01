#include <stdio.h>

int main() {
    char nom[50], prenom[50],adress_email[50], sexe[20];
    int age = 0;
    
    printf("Entrer votre nom : ");
    scanf("%s", &nom);
    printf("Entrer votre prenom : ");
    scanf("%s", &prenom);    
    printf("Entrer votre adress email : ");
    scanf("%s", &adress_email);    
    printf("Entrer votre sexe : ");
    scanf("%s", &sexe);
    printf("Entrer votre age : ");
    scanf("%d", &age);
        printf("Votre nom est: %s, votre prénom est : %s, votre adress email est: %s, votre sexe: %s, votre age est: %d ", nom, prenom, adress_email, sexe, age );
    return 0;
}