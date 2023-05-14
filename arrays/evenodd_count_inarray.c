#include <stdio.h>

int main() {
    // Write C code here
    int arr[5];
    int i,even=0,odd=0;
    printf("Enter the 5 elements:\n");
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("\n The array elements are :\n");
    for(i=0;i<5;i++)
    {
         printf("%d",arr[i]);
         printf("\t");
         if(arr[i]%2==0)
         even++;
         else
         odd++;
    }
    printf("\nNumber of even numbers in array:%d \n",even);
    printf("Number of odd numbers in array:%d \n",odd);
    return 0;
}
