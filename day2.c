#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the elements of array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("reversed array= ");
    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}