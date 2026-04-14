// Find max element using pointer
#include <stdio.h>

int main() {
    int arr[5] = {3,7,2,9,1};
    int *p = arr;
    int max = *p;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("Max = %d", max);
}