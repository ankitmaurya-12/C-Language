#include<stdio.h>

int main(){
    int marks[4]; // Alloacte space for 4 interger

    printf("Enter the value of marks\n");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks\n");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks\n");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks\n");
    scanf("%d", &marks[3]);
    
    printf("You have Entered %d,%d,%d & %d\n", marks[0],marks[1], marks[2], marks[3]);
    
    return 0;
}