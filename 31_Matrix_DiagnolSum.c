//Wap to find the sum of the diagnol elements of a matrix

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int arr[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Main diagonal sum
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}