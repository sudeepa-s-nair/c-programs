#include <stdio.h>

int main() {
    // Write C code here
    int arr[6]={2,2,3,4,4,5};
    int count=0,n;
    printf("\nThe array elements :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element from array to check its number of occurences \n");
    scanf("%d",&n);
     for(int i=0;i<6;i++)
     {

             if(arr[i]==n)
             count++;
     }
        printf("\n %d occured %d times",n,count);
    return 0;
}
