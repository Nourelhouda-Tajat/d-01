#include <stdio.h>

int main() {
       int n=0, i=0, result=0;
   do{
       printf("entrer un nombre entier positif :");
       scanf("%d",&n);
   } while (n<=0);
   for(i=1; i<=n; i++){
       result+=i;
   }
   printf("la somme du %d est: %d ",n,result);

    return 0;
}