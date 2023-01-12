//  ACTIVITY SELECTION


#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int,int>b)
{
    return (a.second<b.second);
}

void activity_selection(pair<int,int>array[], int size)
{
    sort(array, array+size, comp);
    int count = 1;
    int prev = 0;
    cout<<"("<< array[prev].first << ", " << array[prev].second << ")";
    for(int i  = 1; i < size; i++)
    {
        if(array[prev].second < array[i].first)
        {
            cout<<", ("<< array[i].first << ", " << array[i].second << ")";
            count++;
            prev = i;
        }
    }
    cout<<"\nNumber of jobs selected : "<<count;
}


int main()
{
    int size;
    cout<<"Enter the number of jobs : ";
    cin>>size;
    pair<int,int> array[size];

    cout<<"Enter the starting and ending time : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i].first>>array[i].second;
    }

    activity_selection(array, size);
}
