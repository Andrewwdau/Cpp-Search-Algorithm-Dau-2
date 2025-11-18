#include "myheaders.h"


// Your ASort function(s) goes here selection sort

template <class T>
void selectionSort(T data[], int n)
{
    // i tracks the boundary between the sorted and unsorted portions
    for (int i = 0; i < n - 1; i++)
    {
        int least = i; // Assume current element is the minimum (least)
        
        // Find the actual minimum element in the remaining unsorted subarray
        for(int j = i + 1; j < n; j++)
        {
            if (data[j] < data[least])
            {
                least = j; // Update the index of the minimum element found so far
            }
        }
        
        // After the inner loop completes, swap the minimum element (at index 'least')
        // with the element at the current position 'i'.
        if (least != i) {
            swap(data[least], data[i]);
        }
    }
}

