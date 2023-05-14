#include <stdio.h>

int main() {
    // Write C code here
    int a,i;
    int sum=0;
    printf("Enter the number \n");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    
   if(sum==a)
   printf("Perfect number \n");
   else
   printf("Not perfect number \n");
    return 0;
}
