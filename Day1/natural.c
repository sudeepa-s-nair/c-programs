
/*
Write a program to find out the sum of first n natural numbers.
Take n as input from the user.
*/

#include<stdio.h>
int main()
{
int n,sum;
printf("Enter the total number \n");
scanf("%d",&n);

sum=(n*(n+1))/2;

printf("Sum of first %d natural numbers is %d\n",n,sum);
}
