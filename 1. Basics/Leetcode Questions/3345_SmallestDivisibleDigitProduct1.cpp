#include<bits/stdc++.h>
using namespace std;

int smallestNumber(int n,int t)
{
    int num=n;
    int prod=1;

    while(num!=0)
    {
        prod*=(num%10);
        num/=10;
    }

    if(prod%t==0)
    {
        return n;
    }

    return smallestNumber(n+1,t);
}
int smallestNumberOpt(int n,int t)
{
    while(true)
    {
        int num=n;
        int prod=1;

        while(num!=0)
        {
            prod*=num%10;
            num/=10;
        }

        if(prod%t==0)
            return n;

        n++;
    }
}
int main()
{
    int n,t,x;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter t: ";
    cin>>t;
    x=smallestNumber(n,t);
    cout<<x;
    cout<<smallestNumberOpt(n,t);
}