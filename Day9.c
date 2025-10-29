#include<stdio.h>

int main(){
    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count =0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }

    if(arr[n-1]>arr[0]){
        count++;
    }

    if(count==1){
        printf("Araay is sorted and rotated");
    }else{
        printf("Array is not sorted and rotated");
    }
    return 0;
}