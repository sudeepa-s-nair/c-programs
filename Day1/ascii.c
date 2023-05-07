/*
Write a C program to check whether the input is digit or alphabet.
Print the ASCII number if it is a digit.
*/

#include<stdio.h>
int main() 
{

    // Write C code here
    char ch;
    printf("Enter  the input \n");
    scanf("%c",&ch);
    
    if(ch>=48 && ch<=57)
    printf("Input is a digit and ascii value is %d \n",ch);
    else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    printf("Input is an alphabet and ascii value is %d \n",ch);
    else
        printf("Input is neither digit not alphabet ,it is a special character \n");
    
    return 0;
}
