#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of element ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Leader in an array are ");

    int max_right=arr[n-1];
    printf("%d",max_right);

    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_right){
            max_right=arr[i];
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}