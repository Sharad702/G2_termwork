//  QUICK SORT


#include<iostream>
using namespace std;


int partition(int array[], int start, int end)
{
    int pivot = array[start];

    int count = 0;

    for(int i = start + 1; i <= end; i++)
    {
        if(pivot >= array[i])
        {
            count++;
        }
    }

    int pivotindex = start + count;
    swap(array[pivotindex], array[start]);

    int i = start, j = end;

    while(i < pivotindex && j > pivotindex)
    {
       while(array[i] <= pivot)
       {
         i++;
       }

       while(array[j] > pivot)
       {
         j--;
       }

       if(i < pivotindex && j > pivotindex)
       {
        swap(array[i++], array[j--]);
       }
    }
    return pivotindex;
}

void quick_sort(int array[], int start, int end)
{
    if(start >= end)
      return;

    int p = partition(array, start, end);

    quick_sort(array, start, p-1);
    quick_sort(array, p+1, end);  
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

    quick_sort(array, 0, size-1);

    cout<<"Sorted array elements are : ";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
}
