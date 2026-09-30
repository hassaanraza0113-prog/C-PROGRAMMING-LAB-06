#include <stdio.h>

int main()
{
    int pin, digit, sum = 0;

    printf("Enter a 4-digit PIN: ");
    scanf("%d", &pin);

    while (pin > 0)
    {
        digit = pin % 10;
        sum = sum + digit;
        pin = pin / 10;
    }

    printf("Sum of digits = %d\n", sum);

    if (sum > 10)
        printf("Strong PIN\n");
    else
        printf("Weak PIN\n");

    return 0;
}
