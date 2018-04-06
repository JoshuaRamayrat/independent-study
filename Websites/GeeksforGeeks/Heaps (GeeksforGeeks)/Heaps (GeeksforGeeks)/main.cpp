#include <iostream>
#include <climits>

using namespace std;

void swap(int *x, int *y);

class minHeap
{
    
    int *harr; //pointer to array of elements in heap.
    int capacity; //max size of minHeap
    int heap_size; //curent size of minHeap

public:
    //constructor class (automatically compiles)
    minHeap(int capacity);

    void minHeapify(int);

    int parent(int i){ return (i-1)/2; }

    int left(int i) { return (2*i + 1); }

    int right(int i) { return (2*i + 2); }

    int extractMin();

    void decreaseKey(int i, int new_val);

    int getMin(){ return harr[0]; }

    void deleteKey(int i);

    void insertKey(int k);

};

minHeap::minHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new int[cap];
}

void minHeap::insertKey(int k)
{
    if (heap_size == capacity)
    {
        cout << "Overflow bro" << endl;
        return;
    }

    //this section of code is inserting the key at the end of
    //the heap.
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;
    
    //fixes minHeap property if violated.
    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }

}

//assuming new_val << harr[i]
void minHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    
    //fuck what's going on here.
    while ( i!=0 && harr[parent(i)]>harr[i] )
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

int minHeap::extractMin()
{
    
}







