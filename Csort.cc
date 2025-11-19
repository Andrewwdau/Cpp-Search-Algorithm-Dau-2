#include "myheaders.h"

void C_sort(long arr[], long n) {
    for (long i = 0; i < n - 1; i++) {
        long minIndex = i;
        for (long j = i + 1; j < n; j++) {
            if (arr[j] < minIndex) {
                minIndex = j;
            }
        }
        long temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
