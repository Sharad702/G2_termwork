//   QUICK SORT


#include <bits/stdc++.h>
using namespace std;


int rearrange_partition(int array[], int start, int end)
{
    int pivot = array[end];

    int i = start - 1;
    
    for (int j = start; j <= end - 1; j++)
    {   
        if (array[j] <= pivot) 
        {
            i++;
            swap(array[i], array[j]);
        }
    }

    swap(array[i + 1], array[end]);
    return (i + 1);
}


int random_partition(int array[], int low, int high)
{
    srand(time(NULL));
    int random_index = low + rand() % (high - low);
    
    swap(array[random_index], array[high]);
 
    return rearrange_partition(array, low, high);
}

void randomquicksort(int array[],int start,int end){
    if(start < end) {
        int partition_index = random_partition(array, start, end);
        randomquicksort(array, start, partition_index - 1);
        randomquicksort(array, partition_index + 1, end);
    }
 }


int main()
{  
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int array[size];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    randomquicksort(array, 0, size-1);

    cout<<"Sorted array elements : ";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
}
