#include <stdio.h>
int main() {

    // initialise array
    int arr[6]={2,2,3,4,4,5};
    //to store frequency of elements in array
   int count,visited,freq[6];
   visited=-1;
    printf("\nThe array elements :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
   
     for(int i=0;i<6;i++)
     {
          count=1;
         for(int j=i+1;j<6;j++)
         {
             if(arr[i]==arr[j])
             {
             count++;
             //to avoid counting same element again
             freq[j]=visited;
             }
         }
       if(freq[i]!=visited)
        freq[i]=count;
     }
     for(int i=0;i<6;i++)
    {
        if(freq[i]!=visited)
       printf("\n%d occured %d times",arr[i],freq[i]);
    }  
    return 0;
}
