//! LeetCode 507 - Perfect Number

/**
*! Approach: Brute Force
*! Time Complexity: O(n)
*! Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
bool PfNoBrute(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return sum==num;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if(PfNoBrute(num))
        cout<<"Perfect Number";
    else
        cout<<"Not a Perfect Number";
    
    return 0;
}