#include <stdio.h>

int Fibonacci (int n){
    int a=0,b=1,c=0,i;
    printf("Entrer le nombre de terme de la suite de Ferbonatchi: ");
    scanf("%d",&n);
    printf("Le %d terme de Fibonacci est: ",n);
    for (i=0; i<n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main() {
    int n;
    printf("%d",Fibonacci(n));
    return 0;
}
