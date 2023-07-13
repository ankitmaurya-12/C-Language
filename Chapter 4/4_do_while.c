#include<stdio.h>

int main(){

    int i=0;
    // do
    // {
    //     printf("the value of i is %d \n",i);
    //     i++;
    // } while (i<=10);
    
// do while loop works very similar to while loop
// while --> checks the condition & then execute the code
// do -while --> execuet the code then checks the condition

// remember:-
// do-while is while loop that execute at least once

    do
    {
        printf("The number is %d \n",i);
        i++;
    } while (i<=4);
    

    return 0;
}