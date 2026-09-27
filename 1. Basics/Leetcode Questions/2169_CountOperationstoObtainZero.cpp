#include <bits/stdc++.h>
using namespace std;
int countOperations(int num1, int num2)
{
    int i=0;
    while(num1!=0 && num2 !=0)
    {
        if (num1>=num2)
        {
            num1-=num2;
        }
        else
        {
            num2-=num1;
        }
        i++;
    }
    return i;
}
int main()
{
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<countOperations(num1,num2);
}
