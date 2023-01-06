//  FACTORIAL


#include<iostream>
using namespace std;

int factorial(int n)
{  
   if(n == 0) 
    return 1;
  
  return n*factorial(n-1);
}


int main()
{
    int n;
    cout<<"Enter Positive Number : ";
    cin>>n;
    int p = factorial(n);
    cout<<"Factorial of " << n << " is " << p << endl; 
    return 0;
}
