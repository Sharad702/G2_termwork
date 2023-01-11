//   HEAP SORT


#include <iostream>
using namespace std;

void heapify(int array[], int size, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 


	if (l < size && array[l] > array[largest])
		largest = l;


	if (r < size && array[r] > array[largest])
		largest = r;


	if (largest != i) {
		swap(array[i], array[largest]);

		
		heapify(array, size, largest);
	}
}


void heapSort(int array[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i);

	for (int i = size - 1; i >= 0; i--) 
    {
		swap(array[0], array[i]);

		heapify(array, i, 0);
	}
}


int main()
{
	int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int array[size];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

	for(int i = size/2 -1; i >= 0; i--)
    {
	    heapify(array, size, i);
    }

    cout << "After heapifying array  elements : ";
	for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
	heapSort(array, size);
	cout << "Sorted array elements : ";
    	for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
}
