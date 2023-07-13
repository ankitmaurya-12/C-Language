#include<stdio.h>
// pointer store the address of another variable

int main(){
    int i = 29;
    // pointer is declare using * before variable j
    int *j = &i; // here & is "address of operator" that is used to obatian the address of given variable

    printf("The value of i is %d\n",i); 
    printf("The value of i is %d\n",*(&i)); //here * is "value at address operator" that is used to find the value at that address
    printf("The value of i is %d\n",*j); // *j=*(&i)
    printf("The address of i is %d\n",&i); 
    printf("The address of i is %d\n",j);
    printf("The address of j is %d\n",&j);
    printf("The value of j is %d\n",*(&j));
    

    return 0;
}