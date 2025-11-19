#include "myheaders.h"


// Your ASort function(s) goes here ..
void A_sort(long arr[], long n) {
    for (long i = 0; i < n - 1; i++) {
        for (long j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

