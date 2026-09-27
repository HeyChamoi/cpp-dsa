#include <bits/stdc++.h>
using namespace std;
int mirrorDistance(int n) 
{
    int num=n,num1=0;
    while(n!=0)
    {
        num1=(num1*10)+(n%10);
        n/=10;
    }
    return abs(num-num1);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<mirrorDistance(n);
    return 0;
}