#include <stdio.h>

int main() {
    int arr[] = { -1, 2, -3, 4, 5, -6, -2, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    while (left <= right) {
        if (arr[left] < 0 && arr[right] < 0)
            left++;
        else if (arr[left] >= 0 && arr[right] < 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        } else if (arr[left] >= 0 && arr[right] >= 0)
            right--;
        else {
            left++;
            right--;
        }
    }

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}