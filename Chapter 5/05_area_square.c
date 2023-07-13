#include<stdio.h>
#include<math.h>

int main(){
    float side;
    printf("Enter the value of side\n");
    scanf("%f",&side);
    printf("The area of sqare is %0.2f unit^2\n", pow(side,2));
    return 0;
}