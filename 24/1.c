#include <stdio.h>
#include <limits.h>

int main() {

    int size, i, max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first and second largest/smallest elements
    for (i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] > min1) {
            min2 = arr[i];
        }
    }

    // Results, let's see
    printf("The second largest element is: %d\n", max2);
    printf("The second smallest element is: %d\n", min2);

    return 0;
}