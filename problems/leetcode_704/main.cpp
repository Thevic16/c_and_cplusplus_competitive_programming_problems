#include <iostream>
#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

int search(int* nums, int numsSize, int target){
    sort(nums, numsSize);
    return binarySearch(nums, 0, numsSize, target);
}


int main() {
    int a_nums[6] = {-1,0,3,5,9,12};
    int* nums;
    int numsSize = 6;
    nums = (int *) malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; ++i) {
        *(nums + i) = a_nums[i];
    }

    printf("%d", search(nums, 6, 9));
    return 0;
}
