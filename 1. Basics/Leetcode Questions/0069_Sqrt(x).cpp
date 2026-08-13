#include<bits/stdc++.h>
using namespace std;

//! My Approach (Linear Search)

int mySqrt(int x)
{
    long long i=0;

    while((i*i)<=x)
    {
        i++;
    }

    return i-1;
}

//! Optimal (Binary Search)

int mySqrtOpt(int x)
{
    long long low=0,high=x,ans=0;

    while(low<=high)
    {
        long long mid=low+(high-low)/2;

        if(mid*mid<=x)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    return ans;
}
int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;

    cout<<mySqrt(x);
    cout<<"\n"<<mySqrtOpt(x);
    return 0;
}