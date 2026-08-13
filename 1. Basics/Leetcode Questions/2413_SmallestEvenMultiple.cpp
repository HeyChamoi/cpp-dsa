#include<bits/stdc++.h>
using namespace std;

int smallestEvenMultiple(int n)
{
    if(n%2==0)
        return n;
    else
        return n*2;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<smallestEvenMultiple(n);

    return 0;
}