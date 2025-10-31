#include<stdio.h>
int main(){
    int arr[]={1,2,3,2,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("enter the element");
    scanf("%d",&element);
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}