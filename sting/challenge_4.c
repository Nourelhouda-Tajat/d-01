// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100],chaine2[100];
    int i=0, compteur=0;

    printf("Entrer la premiere chaine de caratere : ");
    scanf("%s", chaine1);
    printf("Entrer la deuxième chaine de caratere : ");
    scanf("%s", chaine2);
    if(strcmp(chaine1,chaine2)==0){
        printf("les chaines sont egales");
    }else{
        printf("les chaines sont différentes");
    }
    
    
    return 0;
}