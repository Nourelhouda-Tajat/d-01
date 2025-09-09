#include <stdio.h>

typedef struct {
    float longueur;
    float largeur;
} rectangle;

float aireRectangle(rectangle r1){
    return r1.longueur*r1.largeur;
}

int main(){
    rectangle r;
    printf("Entrer la longueur du rectangle: ");
    scanf("%f",&r.longueur);
    printf("Entrer la largeur du rectangle: ");
    scanf("%f",&r.largeur);
    printf("L aire du rectangle est: %f ",aireRectangle(r));
    return 0 ;
}