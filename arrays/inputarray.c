#include <stdio.h>

int main() {
    // Write C code here
    int arr[5];
    int i;
    printf("Enter the 5 elements:\n");
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<5;i++)
    {
         printf("%d",arr[i]);
         printf("\t");
    }
    return 0;
    }
