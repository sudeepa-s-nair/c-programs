/*
Write a program to calculate the sum of the digits of a given number.
*/


#include <stdio.h>

int main() {
    // Write C code here
    int a,tmp,r,sum=0;
    printf("Enter the number \n");
    scanf("%d",&a);
    
    tmp=a;
    while(tmp>0)
    {
        r=tmp%10;
        sum=sum+r;
        tmp=tmp/10;
        
    }
       printf("Sum is %d \n",sum); 
    return 0;
}
