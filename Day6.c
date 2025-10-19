#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {4, 5, 6, 7, 8};
    int n1 = 5, n2 = 5;
    int unionArr[20], intersectionArr[20];
    int k = 0, l = 0;
    int found;

    //  Find Union 
    for (int i = 0; i < n1; i++) {
        unionArr[k++] = A[i];
    }

    for (int i = 0; i < n2; i++) {
        found = 0;
        for (int j = 0; j < n1; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = B[i];
        }
    }

    //  Find Intersection 
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                intersectionArr[l++] = A[i];
                break;
            }
        }
    }

    //  Print Union 
    printf("Union: ");
    for (int i = 0; i < k; i++)
        printf("%d ", unionArr[i]);
    printf("\n");

    //  Print Intersection 
    printf("Intersection: ");
    for (int i = 0; i < l; i++)
        printf("%d ", intersectionArr[i]);
    printf("\n");

    return 0;
}