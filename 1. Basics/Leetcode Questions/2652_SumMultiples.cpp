#include<bits/stdc++.h>
using namespace std;
int sumOfMultiples(int n)
{
    int sum=0;

    for(int i=3;i<=n;i++)
    {
        if(i%3==0 || i%5==0 || i%7==0)
            sum+=i;
    }

    return sum;
}

int sumOpt(int n,int k)
{
    int m=n/k;
    return k*m*(m+1)/2;
}

int sumOfMultiples(int n)
{
    return sumOpt(n,3)+sumOpt(n,5)+sumOpt(n,7)
          -sumOpt(n,15)-sumOpt(n,21)-sumOpt(n,35)
          +sumOpt(n,105);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<sumOfMultiples(n);
    return 0;
}