//  SELECTION SORT


#include<iostream>
using namespace std;

void selection_sort(int array[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        int min = i;

        for(int j = i+1; j < size; j++)
        {
            if(array[j] < array[min])
               min = j;
        }
        
        if(min != i)
         swap(array[i], array[min]);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int array[size];
    cout<<"Enter the elements of array : ";
    for(int i  = 0; i < size; i++)
    {
        cin>>array[i];
    }

    selection_sort(array, size);
    cout<<"Sorted array elements : ";
    for(int i = 0; i  < size; i++)
    {
        cout<<array[i]<<" ";
    }
}
