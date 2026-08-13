#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) 
{
    int sum=0,prod=1,num;
    num=n;

    while(num!=0)
    {
        sum+=(num%10);
        prod*=(num%10);
        num=num/10;
    }

    return prod-sum;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<subtractProductAndSum(n);
    return 0;
}