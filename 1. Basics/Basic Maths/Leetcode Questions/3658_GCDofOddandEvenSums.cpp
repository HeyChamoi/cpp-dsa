#include <bits/stdc++.h>
using namespace std;
/**
 * ! LeetCode 3658 - GCD of Odd and Even Sums
 
 * TODO: Given an integer n, compute the GCD of: 1. Sum of the first n odd numbers. and 2. Sum of the first n even numbers.
 
 * ? Approach 1 (Using Arithmetic Progression Formula):
 * ? Calculate the sums of the first n odd and even numbers
 * ? using the Arithmetic Progression (AP) sum formula.
 * ? Then compute the GCD of the two sums.
 * ? Time Complexity: O(log(min(sumOdd, sumEven)))
 
 */

int gcdOfOddEvenSums(int n) 
{
    int sumOdd,sumEven;
    sumOdd=(n*(2 + (n-1)*2))/2;
    sumEven=(n*((4)+(2*n-2)))/2;
    return gcd(sumOdd,sumEven);
}
/**
 * ? Approach 2 (Optimal - Mathematical Identity):
 * ? Use the identities:
 * ? Sum of first n odd numbers = n²
 * ? Sum of first n even numbers = n(n + 1)
 * ? Then directly compute the GCD.
 * ? Time Complexity: O(log(min(n², n(n+1))))
 * ? Space Complexity: O(1)
*/

int gcdOpt(int n)
{
    return gcd(n * n, n * (n + 1));
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x=gcdOfOddEvenSums(n);
    cout<<x<<endl;
    x=gcdOpt(n);
    cout<<x<<endl;
}