#include<stdio.h>
void display(); // function prototype

int main(){
    int a;
    printf("Initializing display function !!\n");
    display(); // function call
    printf("Display function finised its worked\n");
    return 0;
    }
//function defination
void display(){
    printf("Void Display function worked!!\n"); 
}