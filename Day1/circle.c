
/* Write a program to find the area and the perimeter of a circle.
Take radius “r” as input. */

#include<stdio.h>
int main()
{

float r,area,prt;

printf("Enter radius \n");
scanf("%f",&r);

area=3.14*r*r;
prt=2*3.14*r;

printf("Area of circle is %.2f \n ",area);
printf("Perimeter of circle is %.2f \n",prt);

return 0;
}
