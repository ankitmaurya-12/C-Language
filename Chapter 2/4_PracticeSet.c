#include<stdio.h>

int main(){

// q2
    printf("%f \n",3.0/8-2 );

//q3
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Divisibility test return: %d\n", n%97);

//q4
    int x=2,y=3,z=3,k=1;
    int result =3*x/y-z+k;
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    // -1+1
    // 0
    printf("result : %d",result);

//q5

    return 0;
}