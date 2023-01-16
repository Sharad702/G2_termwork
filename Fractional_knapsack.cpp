//   FRACTIONAL KNAPSACK


#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int,int>b)
{
   double r1 = (double)a.first/a.second;
   double r2 = (double)b.first/b.second;

   return r1>r2;   
}

void fractional_knapsack(pair<int,int>array[], int size, int weight)
{
    sort(array, array+size, comp);
    double res = 0;
    for(int i  = 0; i < size; i++)
    {
        if(array[i].second <= weight)
        {
           res = res + array[i].first;
           weight = weight - array[i].second;
        }
        else
        {
            res = res + array[i].first*((double)weight/array[i].second);
            break;
        }
    }
    cout<<"Maximum value can be obtained : "<<res;
}


int main()
{
    int size;
    cout<<"Enter the number of total items : ";
    cin>>size;
    pair<int,int> array[size];

    cout<<"Enter the value and weight of items : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i].first>>array[i].second;
    }
    int weight;
    cout<<"Enter the weight of knapsack : ";
    cin>>weight;
    fractional_knapsack(array, size, weight);
}
