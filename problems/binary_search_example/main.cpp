// C program to implement iterative Binary Search
#include <stdio.h>

// algoritmo de ordenamiento en c -----------------------------------------------------
// Function to swap the position of two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
    // Find largest among root,
    // left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;
    // Swap and continue heapifying
    // if root is not largest
    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
// Main function to do heap sort
void sort(int arr[], int N)
{
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        // Heapify root element
        // to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}



// An iterative binary search function. ---------------------------------------------------
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

            // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 15, 23,  3, 4, 10, 72, 4,  40 };

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);

    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element is not present"
               " in array");
    }
    else{
        printf("Element is present at "
               "index %d \n", result);
        printf("Verification print the element %d", arr[result]);
    }

    return 0;
}
