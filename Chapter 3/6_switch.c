#include<stdio.h>

int main(){

    int rating;
    printf("Enter your rating (1-5) \n");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is 1");
        break;
    case 2:
        printf("Your rating is 2");
        break;
    case 3:
        printf("Your rating is 3");
        break;
    case 5:
        printf("Your rating is 5");
        break;
// you can write cases in any order not nesseary to be in asecnding order
    case 4:
        printf("Your rating is 4");
        break;
    // case 6:
    //     printf("Your rating is 6");
    //     break;
    
    default:
        printf("Your rating is Invalid");
        break;
    }

    return 0;
}