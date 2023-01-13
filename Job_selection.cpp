//   JOB SELECTION


#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second);
}

void job_selection(pair<int, int> array[], int size)
{
    sort(array, array+size, comp);
   
    int result[size]; 
    bool slot[size] = {0};

    for(int i = 0; i < size; i++)
    {
        for(int j = min(size, array[i].first) - 1; j >= 0; j--)
        {
          if(slot[j] == false)
          {
            result[j] = array[i].second;
            slot[j] = true;
            break;
          }
        }
    }
    
    cout<<"Job selected with profits are : ";
    for(int i = 0; i < size; i++)
    {
        if(slot[i])
         cout<<result[i]<<" ";
    }

}


int main()
{
    int size;
    cout<<"Enter the number of jobs : ";
    cin>>size;

    pair<int, int> array[size];
    cout<<"Enter the job time and profit : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i].first>>array[i].second;
    }

    job_selection(array, size);
}
