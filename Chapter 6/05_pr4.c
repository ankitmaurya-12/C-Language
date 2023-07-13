#include<stdio.h>
void sumAndavg(int x, int y, int *sum, float *avg){  // here void is returning value by not returning value
// beacuse we assign value to x, y address and then adding 
    *sum = x+y;
    *avg = (float)*sum/2; // here float is typecast
}
int main(){
    int a=3;
    int b=5;
    int sum;
    float avg;
    sumAndavg(a,b, &sum, &avg);
    printf("sum of a & b is %d\n",sum);
    printf("sum of a & b is %0.2f\n",avg);
    return 0;
}