#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of diamond: ");
    scanf("%d", &n);

    /* Upper half */
    for (i = 1; i <= n; i++)
    {
        /* Print spaces */
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        /* Print stars and spaces */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--)
    {
        /* Print spaces */
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        /* Print stars and spaces */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}















































































































































































