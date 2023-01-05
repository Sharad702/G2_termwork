// BINARY SEARCH


#include<iostream>
using namespace std;

int binary_search(int array[], int low, int high, int element)
{
   
   while(low <= high)
   {
      int mid = low + (high - low)/2;
      
      if(array[mid] == element)
      {
        return mid;
      }
      else if(array[mid] > element)
      {
        high = mid - 1;
      }
      else
      low = mid + 1;
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
    
    int place = binary_search(array, 0, size - 1, element);

    if(place == -1)
    {
        cout<<"Element Not Found";
    }
    else
    cout<<"Element found at index : "<<place;
}
