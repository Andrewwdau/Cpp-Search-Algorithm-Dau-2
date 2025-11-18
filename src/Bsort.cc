#include "myheaders.h"


// Your BSort function(s) go here countsort

void countingsort(long data[], const long n) {
    if (n <= 1) return; // Handle small arrays

    long i;
    // --- 1. Find the largest number (max value) ---
    long largest = data[0];
    for (i = 1; i < n; i++) {
        if (data[i] > largest) {
            largest = data[i];
        }
    }

    // Handle case where largest might be negative, though Counting Sort is best for non-negative integers.
    // Assuming non-negative based on original code's count array indexing.
    if (largest < 0) {
        // Counting sort as implemented only works for non-negative integers.
        return; 
    }

    // Array for the sorted output
    long *tmp = new long[n]; 
    
    // --- 2. Create and initialize the count array ---
    // The size is largest + 1 to include the index for the largest value.
    unsigned long *count = new unsigned long[largest + 1]; 
    
    for (i = 0; i <= largest; i++) {
        count[i] = 0;
    }

    // --- 3. Count numbers in data[] (Corrected: only increment once) ---
    for (i = 0; i < n; i++) {
        count[data[i]]++;
    }

    // --- 4. Count numbers ≤ i (Cumulative count) ---
    for (i = 1; i <= largest; i++) {
        count[i] = count[i-1] + count[i];
    }

    // --- 5. Put numbers in order in tmp[] (Iterate backwards for stability)
    for (i = n - 1; i >= 0; i--) {
        // The index in tmp where data[i] should go is count[data[i]] - 1
        tmp[count[data[i]] - 1] = data[i];
        // Decrement the count for the current value to handle duplicates
        count[data[i]]--; 
    }
    
    //Transfer numbers from tmp[] to the original array
    for (i = 0; i < n; i++) {
        data[i] = tmp[i];
    }

    // --- 7. Clean up dynamic memory ---
    delete[] tmp;
    delete[] count;
}
