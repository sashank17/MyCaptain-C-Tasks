#include <stdio.h>

int main() {
    int arr[3][3];
    int *p = (int *) &arr;
    printf("Enter the elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (p + i*3 + j));
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(p + i*3 + j));
        }
        printf("\n");
    }

    // sum of diagonals
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i==j)
                sum += *(p + i*3 + j);
        }
    }
    printf("sum of diagonal: %d", sum);
}