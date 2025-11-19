#include "myheaders.h"

void E_sort(long arr[], long n) {
    for (long i = 1; i < n; i++) {
        long key = arr[i];
        long j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
