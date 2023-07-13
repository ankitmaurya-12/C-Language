//  calculate fibonachi series using recursion

#include<stdio.h>
int fibonacci(int n);

int main(){
    int n;
    printf("Enter the number to br calulated for fibonachi series \n");
    scanf("%d",&n);    
    printf("The sum of fibonachi series will be %d", fibonacci(n));
    return 0;
}
// int fib(int a){
//     int x;
//     if (x <= 1) {
//         return x;
//     }else{
//     x= (x-1)+(x-2);}
//     return x;
// }

int fibonacci(int n) {   //this is from chat gpt
    // if (n <= 1) {
    //     return n;
    // }
    n= fibonacci(n - 1) + fibonacci(n - 2);
    return n;
}
