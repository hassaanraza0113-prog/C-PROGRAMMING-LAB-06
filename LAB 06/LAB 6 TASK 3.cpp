#include <stdio.h>

int main()
{
    int i, status;
    int present = 0, absent = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Enter status of student %d (1=Present, 0=Absent): ", i);
        scanf("%d", &status);

        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
        else
            printf("Invalid input!\n");
    }

    printf("\nTotal Present = %d\n", present);
    printf("Total Absent = %d\n", absent);

    return 0;
}



