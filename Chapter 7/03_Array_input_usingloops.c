#include<stdio.h>

int main(){
    int marks[5];

    for (int i = 1; i<6; i++)
    {
        printf("Enter the marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 1; i<6; i++)
    {
        printf("Marks of student %d is %d.\n",i, marks[i]);
    }
    
    return 0;
}

// upper one shows error becasue in this marks store start from i = 1, not from 0 so we have seprated it by including j in below

// int main(){
//     int j;
//     int marks[5];

//     for (int i = 1; i<6; i++)
//     {
//         printf("Enter the marks of student %d: ",i);
//         scanf("%d",&marks[j]);
//     }
//     for (int i = 1; i<6; i++)
//     {
//         printf("Marks of student %d is %d.\n",i, marks[j]);
//     }
    
//     return 0;
// }