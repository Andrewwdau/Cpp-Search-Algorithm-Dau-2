#include "myheaders.h"
#include <vector>
#include <algorithm>

void D_sort(long arr[], long n) {
    long minVal = arr[0];
    long maxVal = arr[0];

    for (long i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    long range = maxVal - minVal + 1;
    std::vector<long> count(range, 0);

    for (long i = 0; i < n; i++) {
        count[arr[i] - minVal]++;
    }

    long idx = 0;
    for (long i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[idx++] = i + minVal;
            count[i]--;
        }
    }
}
