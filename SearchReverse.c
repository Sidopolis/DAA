#include<stdio.h>
int main(){
    int n,i,search;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the content of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    int found=0;
    for(i=0;i<n;i++){
        if (arr[i]==search){
            found = 1;
            break;
        }
    }

    if(found){
        printf("\nElement found at index :%d\n ", i);
        printf("Array elements in reverse order: ");
        for(i=n-1;i>=0;i--){
            printf("%d ", arr[i]);
        }
    } else{
        printf("\n Element not found in the array.\n");
    }

    return 0;
}