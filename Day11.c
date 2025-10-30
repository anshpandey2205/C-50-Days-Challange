#include <stdio.h>

void rearrange(int arr[], int n) {
    int pos[100], neg[100];  // arrays to store positive & negative numbers
    int p = 0, q = 0;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    //  rearrange 
    int i = 0, j = 0, k = 0;
    while (i < p && j < q) {
        arr[k++] = pos[i++];   // put positive
        arr[k++] = neg[j++];   // then negative
    }

    // If any positives left
    while (i < p)
        arr[k++] = pos[i++];

    // If any negatives left
    while (j < q)
        arr[k++] = neg[j++];
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}