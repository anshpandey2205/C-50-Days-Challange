#include <stdio.h>

int main() {
    int arr[9];
    int i;

    // enter the elements of array
    printf("Enter 9 array elements:\n");
    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    // MAXIMUM
    int max = arr[0];
    for(i = 0; i < 9; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element = %d\n", max);

    // MINIMUM
    int min = arr[0];
    for(i = 0; i < 9; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Minimum element = %d\n", min);

    return 0;
}