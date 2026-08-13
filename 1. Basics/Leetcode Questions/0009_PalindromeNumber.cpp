#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) 
{
    long long rev=0;
    long long num=x;

    if(x<0)
        return false;

    while(x!=0)
    {
        rev=rev*10+(x%10);
        x=x/10;
    }

    return rev==num;
}

int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;

    if(isPalindrome(x))
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";

    return 0;
}