#include <stdio.h> // Inclure la bibliothèque standard d'entrée-sortie

int main() {
    int n = 0; 

    printf("Entrer un nombre entier : ");
    scanf("%d", &n);

       // Affichage en binaire
    printf("Valeur en Binaire : ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
; 
    printf("Valeur hexadecimale : %x\n", n); 
    return 0; 
}
