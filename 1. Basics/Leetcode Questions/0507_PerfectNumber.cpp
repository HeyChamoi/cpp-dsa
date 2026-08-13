#include <bits/stdc++.h>
using namespace std;

//! Brute Force Approach

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

//! Optimal Approach 

bool PfNoOpt(int num) {
    if (num <= 1)
        return false;
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
        {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }

        return sum == num;
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
    
    if(PfNoOpt(num))
        cout<<"\nPerfect Number";
    else
        cout<<"\nNot a Perfect Number";
    
        return 0;
}