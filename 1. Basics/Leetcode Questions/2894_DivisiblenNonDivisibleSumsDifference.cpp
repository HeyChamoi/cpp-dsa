#include<bits/stdc++.h>
using namespace std;

int differenceOfSumsBF(int n,int m)
{
    int num1=0,num2=0;

    for(int i=1;i<=n;i++)
    {
        if(i%m!=0)
            num1+=i;
        else
            num2+=i;
    }

    return num1-num2;
}

int differenceOfSumsOpt(int n,int m)
{
    int total=n*(n+1)/2;
    int k=n/m;
    int divisible=m*k*(k+1)/2;

    return total-2*divisible;
}

int main()
{
    int n,m;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter m: ";
    cin>>m;

    cout<<"Brute Force: "<<differenceOfSumsBF(n,m)<<endl;
    cout<<"Optimal    : "<<differenceOfSumsOpt(n,m);

    return 0;
}