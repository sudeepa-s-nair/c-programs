#include <stdio.h>

int main() {
    // Write C code here
    int arr[6]={2,2,3,4,4,5};
   int count,freq[6];
    printf("\nThe array elements :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
     for(int i=0;i<6;i++)
     {
       count=0;
         for(int j=i;j<6;j++)
         {
             if(arr[i]==arr[j])
             count++;
         }
        freq[i]=count;
     }
     for(int i=0;i<6;i++)
    {
        if(freq[i]>1)
       printf("\n %d occured %d times",arr[i],freq[i]);
       
    }
    printf("\nOther elements only occured once");   
    return 0;
}
