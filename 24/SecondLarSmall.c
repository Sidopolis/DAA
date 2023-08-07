#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int maximum1 = arr[0], minimum1 = arr[0], maximum2 = arr[0], minimum2 = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > maximum1 ){
            maximum2 = maximum1 ;
            maximum1 = arr[i];
        } else if(arr[i] > maximum2 && arr[i] != maximum1){
            maximum2 = arr[i];
        } if(arr[i] < minimum1){
            minimum2 = minimum1;
            minimum1 = arr[i];
        } else if(arr[i] < minimum2 && arr[i] != minimum1){
            minimum2 = arr[i];
        }
    }

    printf("Second max elements: %d\n ",maximum2);
    printf("Second min elements: %d\n",minimum2);
    return 0;
}