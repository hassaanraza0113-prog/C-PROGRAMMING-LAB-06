#include <stdio.h>

int main()
{
    int n, i;
    long long fact1 = 1, fact2 = 1, fact3 = 1;
    long long catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    /* Calculate (2n)! */
    for (i = 1; i <= 2 * n; i++)
    {
        fact1 = fact1 * i;
    }

    /* Calculate n! */
    for (i = 1; i <= n; i++)
    {
        fact2 = fact2 * i;
    }

    /* Calculate (n+1)! */
    for (i = 1; i <= n + 1; i++)
    {
        fact3 = fact3 * i;
    }

    catalan = fact1 / (fact2 * fact3);

    printf("Catalan number = %lld\n", catalan);

    return 0;
}
