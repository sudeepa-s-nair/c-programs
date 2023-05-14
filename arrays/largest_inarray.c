#include <stdio.h>

int main() {
    // Write C code here
    int arr[5];
    int i,largest;
    largest=arr[0];
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
         if (arr[i]>largest)
            largest=arr[i];
    }
    printf("\nLargest number in array:%d \n",largest);
    return 0;
}
