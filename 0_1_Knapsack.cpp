//   0 1  KNAPSACK


#include <bits/stdc++.h>
using namespace std;


int max(int a, int b)
{
    return (a > b) ? a : b; 
    
}

int knapSack(int weight, int wt[], int val[], int size)
{

	if (size == 0 || weight == 0)
		return 0;


	if (wt[size - 1] > weight)
		return knapSack(weight, wt, val, size - 1);

	else
		return max(val[size - 1] + knapSack(weight - wt[size - 1], wt, val, size - 1), knapSack(weight, wt, val, size - 1));
}


int main()
{
	int size;
    cout<<"Enter the number of total items : ";
    cin>>size;
    int wt[size], val[size];
    cout<<"Enter the weight and value of items : ";
    for(int i = 0; i < size; i++)
    {
        cin>>wt[i]>>val[i];
    }
    int weight;
    cout<<"Enter the weight of knapsack : ";
    cin>>weight;
    int maximum = knapSack(weight, wt, val, size);
    cout<<"Maximum value can be obtained : "<<maximum;
}


