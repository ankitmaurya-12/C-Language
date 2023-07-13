#include<stdio.h>

// sum is a function which takes a and b as input and return an integer as an output
int sum (int a, int b); // function prototype // here a and b is parameter

// int main(){
//     sum(2,6); //function call // here 2 and 6 is arguments
//     return 0;
// }
// int sum (int a, int b){
//     int result;
//     result=a+b;
//     printf("Sum of %d and %d is %d.\n", a, b,result);
// }


// or we can write as 

int main(){
    int c;
    c=sum(6,9);
    printf("The value of c is %d\n",c);
    return 0;
}

int sum (int a, int b){
    int result;
    result =a+b;
    return result;
}