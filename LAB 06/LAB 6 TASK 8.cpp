#include <stdio.h>

int main()
{
    int a[20], i, n = 8;
    int search, index, value;
    int max, min;

    // 1 & 2. Take 8 elements
    printf("Enter 8 numbers:\n");

    for(i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    // 3. Print array
    printf("Array: ");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }

    // 4. Find largest and smallest
    max = a[0];
    min = a[0];

    for(i = 1; i < 8; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("\nLargest = %d", max);
    printf("\nSmallest = %d\n", min);

    // 5. Search for a number
    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Found at index %d\n", i);
            break;
        }
    }

    // 6. Insert a number
    printf("Enter index for insertion: ");
    scanf("%d", &index);

    printf("Enter number: ");
    scanf("%d", &value);

    for(i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = value;
    n++;

    // 7. Delete a number
    printf("Enter index to delete: ");
    scanf("%d", &index);

    for(i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    // 8. Print final array
    printf("Final array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
