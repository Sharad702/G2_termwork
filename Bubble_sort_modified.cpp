//  BUBBLE SORT


#include<iostream>
using namespace std;

void Bubble_sort(int array[], int size)
{  
   bool flag = 1; 
   for(int i = 0; i < size-1 && flag == 1; i++)
   {
    flag = -1;
    for(int j = 0; j < size-i-1; j++)
    {
        if(array[j] > array[j+1])
        {
            swap(array[j], array[j+1]);
            flag = 1;
        }
    }    
   }
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<"Enter array elements : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    Bubble_sort(array,size);
    
    cout<<"Sorted array is  : ";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<< " ";
    }
}
