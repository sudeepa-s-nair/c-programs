/*Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.
2. Write a C program to find the maximum of 2 numbers using Conditional operator.
*/

#include<stdio.h>
int main()
{

int a,b;
printf("Enter 2 numbers : \n");
scanf("%d %d",&a,&b);

(a>b)?printf("1st num is greater\n"):printf("2nd num is greater\n");

a+=b;

printf("Sum is %d \n",a);

return 0;
}


