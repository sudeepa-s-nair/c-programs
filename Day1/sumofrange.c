/*
Write a program to find the sum of numbers in a given range.

*/



#include<stdio.h>
int main()
{
int r1,r2,sum=0,i;
printf("Enter the starting range \n");
scanf("%d",&r1);
printf("Enter the ending range \n");
scanf("%d",&r2);
for(i=r1;i<=r2;i++)
{
   sum=sum +i; 
}

printf("Sum is %d\n",sum);
}
