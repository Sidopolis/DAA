#include<stdio.h>
int main() {
    int n;
    printf("Enter how many numbers you want to read from array:");
    scanf("%d",&n);
    int arr[n],prefix = 0;
    printf("Enter elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf(" %d", arr[i] += prefix);
        prefix = arr[i];
    }
    printf(" \n");
    return 0;
}