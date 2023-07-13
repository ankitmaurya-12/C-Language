#include<stdio.h>

int main(){

    int physics,chemistry,math;
    float total;

    printf("Enter Physics marks\n");
    scanf("%d",&physics);
    printf("Enter Chemistry marks  \n");
    scanf("%d",&chemistry);
    printf("Enter Math marks \n");
    scanf("%d",&math);

    total= (physics+chemistry+math)/3;

    if ((total<=40) || physics<=33 || chemistry<=33 || math<=33)
    {
        printf("Your total is %f and you are Fail", total);
    }else{
        printf("Your total is %f and you are Pass", total);
    }
    
    return 0;
}