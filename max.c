#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {

// pre: Pointer numbers points to an array with "size" number of elements
// post: Returns the largest number in the given array

  assert(size>0) ; // Ensures that the array is not empty
    int max_value = numbers[0]; // initially assume that the first element is the largest

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max_value) {
            max_value = numbers[i]; // Update max_value if a larger number is found
        }
    }

    return max_value;



  return -1;
}

#ifndef TEST

int main() {

	return 0;
}

#endif
