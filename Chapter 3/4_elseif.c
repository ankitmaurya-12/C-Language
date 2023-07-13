#include<stdio.h>

int main(){

    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if (num==1)
    {
        printf("the num is 1\n");
    }
    else if (num==2)
    {
        printf("the num is 2\n");
    // }
    // else{
    //     printf("the num is %d",num);
    }
    else{
        printf("the num is not 1 & 2");
    }
    
    return 0;
}