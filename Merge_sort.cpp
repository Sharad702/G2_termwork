//  MERGE SORT


#include<iostream>
using namespace std;


void merge_array(int array[], int start, int end)
{
    int mid = start + (end - start)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int first[len1];
    int second[len2];

    int mainArrayindex = start;
    for(int i = 0; i < len1; i++)
    {
        first[i] = array[mainArrayindex++];
    }
    
    mainArrayindex = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = array[mainArrayindex++];
    }
    
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = start;
    
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            array[mainArrayindex++] = first[index1++];
        }
        else
       {
             array[mainArrayindex++] = second[index2++];
       }
    }

    while(index1 < len1)
    {
        array[mainArrayindex++] = first[index1++];
    }

    while(index2 < len2)
    {
        array[mainArrayindex++] = second[index2++];
    }

}


void merge_sort(int array[], int start, int end)
{
    if(start >= end)
     return;
    
    int mid = start + (end - start)/2;

    merge_sort(array, start, mid);
    merge_sort(array, mid+1, end);

    merge_array(array, start, end);
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

    merge_sort(array, 0, size-1);
    
    cout<<"Sorted array elements are : ";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }

}
