// LINEAR SEARCH

#include<iostream>
using namespace std;

int linear_search(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }
    return -1;
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

    int element;
    cout<<"Enter the element to be searched : ";
    cin>>element;
    
    int place = linear_search(array, size, element);

    if(place == -1)
    {
        cout<<"Element Not Found";
    }
    else
    cout<<"Element found at index : "<<place;
}
