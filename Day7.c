#include<stdio.h>
void rotate_one(int arr[],int n){
    int last=arr[n-1];
    // shift first element toward right
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    // move last element to first
    arr[0]=last;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    rotate_one(arr,n);
    printf("rotated array\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}