// write program using functions to find the averager of three numbers
#include<stdio.h>
int average(int x,int y,int z);

int main(){
    int a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("the average of three numebrs is %d", average(a,b,c));
    return 0;
}
int average(int x,int y,int z){
    int result;
    result =(x+y+z)/3;
    return result;
}