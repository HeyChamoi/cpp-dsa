#include <bits/stdc++.h>
using namespace std;
int countCommas(int n) 
{
    int commas;
    if(n>=1000&&n<1000000)
    {
        commas=n-1000+1;
        return commas;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<countCommas(n);
    return 0;
}