#include <stdio.h>
int main(){
    int n, i, sum=0;
    int maximum, minimum;
    float average;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the content of the array: \n");
    for(i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
        if(i==0){
            maximum=arr[i];
            minimum = arr[i];
        } else{
            if(arr[i]>maximum){
                maximum = arr[i];
            } if(arr[i] < minimum){
                minimum = arr[i];
            }
        }
    }
    average=(float)sum/n;
    printf("The content of the array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nSum of the array elements: %d \n", sum);
    printf("Avg of the array elements: %0.2f\n",average);
    printf("maximum element of the array: %d\n", maximum);
    printf("minimum element of the array: %d\n",minimum);
    return 0;
}