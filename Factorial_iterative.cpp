// FACTORIAL


#include<iostream>
using namespace std;

void factorial(int n)
{  
    int fact = 1;
    for(int i = 2; i <= n; i++)
    {
         fact = fact*i;
    }
    cout<<"Factorial of " << n << " is " << fact << endl; 
}


int main()
{
    int n;
    cout<<"Enter Positive Number : ";
    cin>>n;
    factorial(n);
    return 0;
}
