//   COUNT SORT


#include<iostream>
using namespace std;
  
int getMax(int array[], int size) 
{  
   int max = array[0];  
   for(int i = 1; i < size; i++)
    {  
      if(array[i] > max)  
         max = array[i];  
   }  
   return max; 
}  
  
void count_sort(int array[], int size)
{  
   int output[size+1];  
   int max = getMax(array, size);  
   int count[max+1];
  
  
   for(int i = 0; i <= max; ++i)   
   {  
        count[i] = 0;
   }  
    
   for (int i = 0; i < size; i++) 
   {  
        count[array[i]]++;  
   }  
  
   cout<<"Count array elements : ";
   for(int i = 0; i <= max; i++)
   {
        cout<<count[i]<<" ";
   }
   cout<<endl;
  
   for(int i = 1; i<=max; i++)
   {
        count[i] += count[i-1];  
   }
   
   for (int i = size - 1; i >= 0; i--)
   {  
        output[count[array[i]] - 1] = array[i];  
        count[array[i]]--;  
   }  
  
   for(int i = 0; i < size; i++) 
   {  
      array[i] = output[i]; 
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
      
    count_sort(array, size);
    cout<<"Sorted array elements : ";
    for(int i = 0; i < size;  i++)
    {
        cout<<array[i]<<" ";   
    }
  
}  
