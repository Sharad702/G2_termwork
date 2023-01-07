//  FIBONACCI


#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, sum = 0;
    
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i < n; i++)
    {
        sum = a + b;
        a = b; 
        b = sum;
        cout<<sum<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms in series : ";
    cin>>n;
    fibonacci(n);
}
