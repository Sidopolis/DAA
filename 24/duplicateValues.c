#include <stdio.h>

int MaxRepeatingElement(int array[], int n)
{
    int maxElement = array[0];
    int maxCount = 1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] == array[i])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxElement = array[i];
        }
    }

    return maxElement;
}
int main()
{
    int i, j, n, count = 0;
    printf("Enter how many numbers you want to read from file: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the content of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int duplicateArr[n];
    int RepeatingCount[n];
    int Index = 0;

    for (i = 0; i < n; i++)
    {
        int isDuplicate = 0;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate)
        {
            int found = 0;

            for (j = 0; j < Index; j++)
            {
                if (duplicateArr[j] == arr[i])
                {
                    found = 1;
                    RepeatingCount[j]++;
                    break;
                }
            }

            if (!found)
            {
                duplicateArr[Index] = arr[i];
                RepeatingCount[Index] = 2;
                Index++;
            }
        }
    }

    printf("Total number of duplicate values: %d\n", Index);

    if (Index > 0)
    {
        printf("Duplicate numbers and their occurrences:\n");
        for (i = 0; i < Index; i++)
        {
            printf("%d occurs %d time(s)\n", duplicateArr[i], RepeatingCount[i]);
        }
    }

    return 0;
}