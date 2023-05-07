/*
Write a program to create a simple calculator to perform Addition, Subtraction, Multiplication and Division using switch statement.
Take the required operation as input from the user.
*/


#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    int a,b,sum,diff,mul,divi;
    
    printf("Enter the operation... \n + for addition \n - for subtraction \n * for multiplication \n / for division \n ");
    scanf("%c",&ch);
    printf("Enter  the input numbers\n");
    scanf("%d %d",&a,&b);
    
    
   switch(ch)
   {
       case '+':
                sum=a+b;
                printf("Sum : %d \n",sum);
                break;
        case '-':
                diff=a-b;
                printf("Difference : %d \n",diff);
                break;
        case '*':
                mul=a*b;
                printf("Product : %d \n",mul);
                break;
        case '/':
                divi=a/b;
                printf("Quotient : %d \n",divi);
                break;
        default:
                printf("Invalid operation \n");
            
   }
    
    return 0;
}
