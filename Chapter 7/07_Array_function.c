#include<stdio.h>

// void pointArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d.\n",i+1, (*ptr+i));
//     }
// } 

// both are above as well as below one

void pointArray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n",i+1, ptr[i]);
    }
    ptr[2]=55555; //this value will changes in arr array of main as well
} 

int main(){
    int arr[]={1,2,3,4,5,6,7};
    pointArray(arr,7);
    printf("%d",arr[2]);
    return 0;
}