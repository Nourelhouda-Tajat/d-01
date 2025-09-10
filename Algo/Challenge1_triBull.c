#include <stdio.h>

int main()
{
    int tab[100];
    int i, j, n, temp;

    printf("Entrer le nombre d'entites a entrer: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Entrer la %d valeur du tableau: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Le tableau avant le tri est: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", tab[i]);
    }
    printf("\n");
    for (j = 0; j < n; j++)
    { // for(j=0;j<n-1;j++){
        for (i = 0; i < n - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
        }
    }
    printf("Le tableau apres le tri est: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", tab[i]);
    }
    printf("\n");
    return 0;
}