#include<bits/stdc++.h>
using namespace std;

int gcdOfOddEvenSums(int n)
{
    int sumOdd,sumEven;
    sumOdd=(n*(2+(n-1)*2))/2;
    sumEven=(n*(4+(2*n-2)))/2;
    return gcd(sumOdd,sumEven);
}

int gcdOpt(int n)
{
    return gcd(n*n,n*(n+1));
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int x=gcdOfOddEvenSums(n);
    cout<<x<<endl;

    x=gcdOpt(n);
    cout<<x<<endl;
}