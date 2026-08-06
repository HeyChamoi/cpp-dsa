#include <bits/stdc++.h>
using namespace std;

/**
 * TODO: LeetCode 3345 - Smallest Divisible Digit Product I
 * TODO: Given two integers n and t, return the smallest number greater than
 * TODO: or equal to n whose product of digits is divisible by t.
 * 
 * ? This solution checks every number starting from n.
 * ? For each number, it calculates the product of its digits.
 * ? If the product is divisible by t, that number is returned.
 * ? Otherwise, the function recursively checks the next integer.
 * 
 *! Time Complexity: O(k × d)
 *! Space Complexity: O(k)
 *! k = Number of integers checked
 *! d = Number of digits in each integer
*/

int smallestNumber(int n, int t)
{
    int num = n;
    int prod = 1;

    //? Calculate the product of the digits
    while(num != 0)
    {
        prod *= (num % 10);
        num /= 10;
    }

    //? Return the current number if its digit product is divisible by t
    if(prod % t == 0)
    {
        return n;
    }

    //? Otherwise, recursively check the next number
    return smallestNumber(n + 1, t);
}
int main()
{
    int n,t,x;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter t: ";
    cin>>t;
    x=smallestNumber(n,t);
    cout<<x;
}
