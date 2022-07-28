#include <stdio.h>

int main()
{
    int k, c;
    printf("Tamaño del cuadrado: ");
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == 0 || i == k - 1 || j == 0 || j == k - 1)
                printf("x ");
            else
                printf(". ");
        }
        printf("\n");
    }
    return 0;
}