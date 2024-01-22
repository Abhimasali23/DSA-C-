#include<iostream>
using namespace std;

class heap {
    
    public:
        int arr[100];
        int size = 0;

        heap() {
            arr[0] = -1;
            size = 0; 
        }

        void insert(int val) {
            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1) {
                int parent = index/2;

                if(arr[parent] < arr[index]) {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else {
                    return;
                }
            }

        }

        void print() {
            for(int i=1;i<=size;i++) {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

        void deleteFromHeap() {
            if(size == 0) {
                cout<<"Nothing to delete"<<endl;
                return;
            }
            // step1: put last element into first index
            arr[1] = arr[size];
            // step2: remove last element
            size--;

            // step3: take root node to its correct position
            int index = 1;
            while (index < size)
            {
                int leftIndex = 2 * index;
                int rightIndex = 2 * index + 1;
                int swapIndex = index;

                if (leftIndex <= size && arr[swapIndex] < arr[leftIndex])
                {
                    swap(arr[swapIndex], arr[leftIndex]);
                    swapIndex = leftIndex;
                }
                else if (rightIndex <= size && arr[swapIndex] < arr[rightIndex])
                {
                    swap(arr[swapIndex], arr[rightIndex]);
                    swapIndex = rightIndex;
                }
                else {
                    return;
                }
            }
        }
};

void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left < n && arr[largest] < arr[left]) {
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}


int main() {

    heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);

    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);

    h.print();
    
    h.deleteFromHeap();
    h.print();

    h.deleteFromHeap();
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i=n/2;i>0;i--) {
        heapify(arr, n, i);
    }
    cout<<"\n Priting the heapified array"<<endl;
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
 
    return 0;
}