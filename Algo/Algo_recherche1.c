# include <stdio.h> 


int main(){
    int tab[100];
    int i,n,r,cmp=0;

    printf("entrer la taille du tableau: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Entrer la %d valeur du tableau: ",i+1);
        scanf("%d",&tab[i]);  
    }
    printf("entrer la valeur a rechercher: ");
    scanf("%d",&r);
    for(i=0; i<n; i++){
        if(tab[i] == r){
            printf("l element correspond a la position %d du tableau",i+1);
            cmp++;
        } 
    }
    if(cmp==0) {
            printf("l element ne correspond a aucun element du tableau");
        }

    
}