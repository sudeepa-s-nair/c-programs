/*
Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify suitable data types to represent the numbers and resultant values  
*/


#include<stdio.h>
int main()
{

int a,b,sum,diff,mul,div;

printf("Enter two numbers: \n");
scanf("%d %d",&a,&b);

sum=a+b;
diff=a-b;
mul=a*b;
div=a/b;

printf("Sum is %d \n Difference is %d \n Product is %d \n Quotient is %d \n",sum,diff,mul,div);

}
