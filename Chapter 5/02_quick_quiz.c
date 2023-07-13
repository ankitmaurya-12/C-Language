#include<stdio.h>

// a C program can have many functions like below
void morning();
void afternoon();
void night();

// a C program start execting from main
int main(){
    // this is example of function
    afternoon();
    morning();
    night();

    
    return 0;
}


void morning(){
    printf("Good Morning Ankit..!!\n");
    // afternoon();  // Function can call function inside it.
    
}
void afternoon(){
    printf("Good Afternoon Ankit..!!\n");
    // night(); // Function can call function inside it.
}
void night(){
    printf("Good Night Ankit..!!\n");
}


// There are two type of funcrions 

// 1. Library function
// this is pre- define in libarary like stdlib.h, math.h, time.h etc.. the value of function come from these library which is stored in computer harddisk

// 2. User define function
// The function is define by user like here we seen morning, afternoon, night etc..