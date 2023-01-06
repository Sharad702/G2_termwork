//  TOWER OF HANOI

#include<iostream>
using namespace std;

void towerofhanoi(int n, char source, char dest, char aux)
{
    if(n == 0)
    return;
    
    towerofhanoi(n-1, source, aux, dest);
    cout<<"Move Disk " << n << " From " << source << " To " << dest << endl;
    towerofhanoi(n-1, aux, dest, source);
}


int main()
{
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;

    towerofhanoi(n, 'A', 'C', 'B');
    return 0;
}
