
// #include<stdio.h>

// int main(){

//     int mark;
//     char grade;
//     printf("Enter your marks \n");
//     scanf("%d", &mark);

//     switch (mark/10)
//     {
//     case 10:
//     case 9:
//         printf("You get A grade !!");
//         break;
//     case 8:
//         printf("You get B grade !!");
//         break;
//     case 7:
//         printf("You get C grade !!");
//         break;

//     default:
//         printf("You are failed !!");
//         break;
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
  float salary, tax;

  printf("Enter the salary of the employee: ");
  scanf("%f", &salary);

  switch((int)(salary / 100000)) {
    case 3 ... 6:
      tax = 0.05 * salary;
      break;
    case 7 ... 11:
      tax = 0.20 * salary;
      break;
    default:
      tax = 0.30 * salary;
  }

  printf("Tax to be paid by the employee: %.2f\n", tax);

  return 0;
}



