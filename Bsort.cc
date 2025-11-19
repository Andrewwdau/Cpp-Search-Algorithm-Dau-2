#include "myheaders.h"


// Your BSort function(s) go here
void merge(long arr[], long l, long m, long r) {
    long n1 = m - l + 1;
    long n2 = r - m;

    long* L = new long[n1];
    long* R = new long[n2];

    for (long i = 0; i < n1; i++) L[i] = arr[l + i];
    for (long j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    long i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(long arr[], long l, long r) {
    if (l >= r) return;
    long m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

void B_sort(long arr[], long n) {
    mergeSort(arr, 0, n - 1);
}
