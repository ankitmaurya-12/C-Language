#include<stdio.h>
int factorial(int n);

int main(){
    int a;
    printf("Enter the number of you want factorial \n");
    scanf("%d",&a);
    printf("the value of factorial %d is %d",a,factorial(a));
    return 0;
}

int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}