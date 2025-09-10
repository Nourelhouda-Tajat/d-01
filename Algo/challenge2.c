#include <stdio.h>

int main()
{
    int tab[100];
    int i, j, n, key, cmp = 1;

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

    for (i = 1; i < n; i++)
    {
        key = tab[i];
        for (j = i - 1; j >= 0 && tab[j] > key; j--)
        {
            tab[j + 1] = tab[j];
        }

        tab[j + 1] = key;
    }

    printf("Le tableau apres le tri est: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", tab[i]);
    }
    printf("\n");
    return 0;
}