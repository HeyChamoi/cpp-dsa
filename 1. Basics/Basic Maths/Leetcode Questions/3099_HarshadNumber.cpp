#include <bits/stdc++.h>
using namespace std;
int sumOfTheDigitsOfHarshadNumber(int x)        
{
    int sum=0,num=x;
    while (num!=0)
    {
        sum+=(num%10);
        num/=10;
    }
    if(x%sum==0)
    return sum;
    else
    return -1;
}
int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<sumOfTheDigitsOfHarshadNumber(x);
}