#include<bits/stdc++.h>
using namespace std;

//! Applying The given formula

int numberOfMatches(int n)
{
    int sum=0,m;

    while(n!=1)
    {
        if(n%2==0)
        {
            m=n/2;
            n=n/2;
        }
        else
        {
            m=(n-1)/2;
            n=((n-1)/2)+1;
        }

        sum+=m;
    }

    return sum;
}

//! Using the noticable pattern

int numberOfMatchesOpt(int n)
{
    return n-1;
}

int main()
{
    int n;

    cout<<"Enter number of matches: ";
    cin>>n;

    cout<<numberOfMatches(n);
    cout<<"\n"<<numberOfMatchesOpt(n);

    return 0;
}