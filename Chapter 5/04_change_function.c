#include<stdio.h>
int change(int a); // here change is just a function name it doesnt means it will change the value to a.
// here change is a misnomer

int main(){
    int b =568; // this b isnt related with the lower function b.
    printf("The value of b before chnage is %d\n",b);    
    change(b);
    printf("The value of b after chnage is %d\n",b);    
    return 0;
}
int change(int a){
    int b =87; // this b isnt related with the upper function b.
}