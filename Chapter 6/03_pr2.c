#include<stdio.h>

void ankit(int a){
    printf("The address of i in function is %d\n",&a);
}
int main(){
    int i;
    printf("The address of i in main is %d\n",&i);
    ankit(i);
    return 0;
}