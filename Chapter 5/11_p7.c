#include<stdio.h>
void pattern(int n);
int main(){
    int n;
    printf("how muv line you wanna print star \n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
// for n=3 print this
// *
// ***
// *****
void pattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    pattern(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*"); 
    }
     printf("\n");
}