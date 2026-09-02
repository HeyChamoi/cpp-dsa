#include <bits/stdc++.h>
using namespace std;
int numberOfSteps(int num) 
{
    int i=0;
    while(num!=0)
    {
        if(num%2==0)
        num/=2;
        else
        num-=1;
        i++;
    }   
    return i;
}
int main()
{
    int num;
    cout<<"Enter a number to find steps required to reduce to zero: ";
    cin>>num;
    cout<<numberOfSteps(num);
}