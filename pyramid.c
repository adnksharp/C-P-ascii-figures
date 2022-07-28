#include <stdio.h>

int main()
{
    int k, c;
    printf("Áltura de la piramide: ");
    scanf("%d", &k);
    for (int i = 0; i <= k; i++)
    {
        c = k - i;
        for (int j = 0; j < (k * 2); j++)
        {
            if (!(j < c || j >= (k * 2) - c - 1))
            {
                if (j == c)
                    printf(".n");
                else
                    printf(" n");
            }
            else if (j == (k * 2) - c - 1 && i > 0)
                printf(".");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}