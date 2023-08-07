#include <stdio.h>
#include <limits.h>

int main(){

int size, i , sum =0, min= INT_MAX, max= INT_MIN;
float avg;

printf("enter the size of the array: ");
scanf("%d", &size);
int arr[size];

printf("enter the elments of the array");
for(i=0;i<size;i++){
scanf("%d", &arr[i]);
}

// find the sum of the elements

for (i=0;i<size;i++){
sum+=arr[i];
}

//find the average of the elements
avg=sum/size;

//find the minimum and maximum of the elements

for(i=0;i<size;i++){
min= arr[0];
if (arr[i]<min){
min= arr[i];
}

if (arr[i]>max){
max=arr[i];
}
}

//search an element in the array
int ele;
printf("enter the element to search:");
scanf("%d", &ele);

int found = 0;
for(i=0;i<size;i++) {
if(arr[i] == ele) {
found=1;
break;
}
}

// reverse the array 
int temp;
for(i=0;i<size/2;i++){
temp=arr[i];
arr[i]=arr[size-i-1];
arr[size -i-1]=temp;
}

// 2nd largest and 2nd smallest


// results lets see

printf(" the sum of the elements is %d\n", sum);
printf(" the average of the elements is %.2f\n", avg);
printf(" the minimum element is %d\n", min);
printf(" the maximum element is %d\n", max);
if (found) {
printf(" the element %d was found in the array. \n", ele);
} else {
printf(" the element %d was not found in the array . \n", ele);
}

printf(" the reversed array is: ");
for(i=0;i<size;i++){
printf("%d", arr[i]);
}
return 0;
}