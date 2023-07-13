#include<stdio.h>

int main(){
    int i =53;
    int *ptr=&i;
    int *j=&ptr;
    // int *j=&*ptr;
    //  comment out and see the difference by running both

    printf("the value of ptr is %u\n",ptr);
    printf("the value of j is %u\n",j);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    printf("the value of j is %u\n",j);
    
    ptr--;
    printf("the value of ptr is %u\n",ptr);

    return 0;
}