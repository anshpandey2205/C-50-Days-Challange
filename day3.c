#include <stdio.h>
int main()
{
   int n,k,temp;
   printf("enter the number of element: ");
   scanf("%d",&n);
   int arr[n];
   
   printf("Enter the array element \n");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Enter the value of k");
   scanf("%d",&k);

   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   printf("kth element minimum element is = %d",arr[k-1]);
   printf("kth element maximum element is = %d",arr[n-k]);

       return 0;
}