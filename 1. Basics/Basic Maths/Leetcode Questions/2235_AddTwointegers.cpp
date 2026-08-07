#include <bits/stdc++.h>
using namespace std;
int sum(int num1, int num2) 
{
    return num1+num2;
}
int main()
{
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    int x=sum(num1,num2);
    cout<<x;
}