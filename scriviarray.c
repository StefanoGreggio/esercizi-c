#include <stdio.h>

int main()
{
    int indice = 0;
    printf("inserire da quanti elementi sarà grande l'array");
    scanf("%d\n", &indice);
    int v[indice];
    printf("scrivi 10 numeri interi\n");
    for (int i = 0; i < indice; i++)
    {
        printf("numero %d\n", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n");
    printf("numeri pari\n");
    for (int i = 0; i < indice; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d\n", v[i]);
        }
    }
    printf("\n");
    printf("numeri dispari\n");
    for (int i = 0; i < indice; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("%d\n", v[i]);
        }
    }
    return 0;
}