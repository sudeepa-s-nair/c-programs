#include <stdio.h>

int main() {
   // Write C code here
    int arr[5];
    int i,smallest;
   
    printf("Enter the 5 elements:\n");
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
     smallest=arr[0];
    printf("\n The array elements are :\n");
    for(i=0;i<5;i++)
    {
         printf("%d",arr[i]);
         printf("\t");
         if (arr[i]<smallest)
            smallest=arr[i];
    }
    printf("\nSmallest number in array=%d\n",smallest);
}
