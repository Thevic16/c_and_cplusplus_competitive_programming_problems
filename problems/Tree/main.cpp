#include <iostream>

using namespace std;

void max_heapify (int Arr[ ], int i, int N)
{
    int left = 2*i;                   //left child
    int right = 2*i +1;                 //right child
    int largest;
    if(left<= N and Arr[left] > Arr[i] )
          largest = left;
    else
         largest = i;
    if(right <= N and Arr[right] > Arr[largest] )
        largest = right;
    if(largest != i )
    {
        swap (Arr[i] , Arr[largest]);
        max_heapify (Arr, largest,N);
    }
 }


void min_heapify (int Arr[ ] , int i, int N)
{
    int left  = 2*i;
    int right = 2*i+1;
    int smallest;
    if(left <= N and Arr[left] < Arr[ i ] )
        smallest = left;
    else
        smallest = i;
    if(right <= N and Arr[right] < Arr[smallest] )
        smallest = right;
    if(smallest != i)
    {
        swap (Arr[ i ], Arr[ smallest ]);
        min_heapify (Arr, smallest,N);
    }
}

void build_maxheap (int Arr[ ],int N)
{
    for(int i = N/2 ; i >= 1 ; i-- )
    {
        max_heapify (Arr, i,N) ;
    }
}

void build_minheap (int Arr[ ],int N)
{
    for( int i = N/2 ; i >= 1 ; i--)
        min_heapify (Arr, i,N);
}


void heap_sort(int Arr[ ],int N)
{
    int heap_size = N;
    build_maxheap(Arr,N);
    for(int i = N; i>=2 ; i-- )
    {
        swap(Arr[ 1 ], Arr[ i ]);
        heap_size = heap_size-1;
        max_heapify(Arr, 1, heap_size);
    }
}


int main() {

    int arr[8] ={0,10, 8, 9, 7, 6, 5, 4};

    heap_sort(arr,7);

    for (int i = 1; i < 8; ++i) {
        cout << arr[i]<<endl;
    }


    return 0;
}