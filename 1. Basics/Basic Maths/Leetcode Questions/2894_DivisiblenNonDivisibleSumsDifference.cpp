#include <bits/stdc++.h>
using namespace std;

/**
 * ! LeetCode 2894 - Divisible and Non-divisible Sums Difference
 
 * TODO: Given two positive integers n and m, return the difference between
 * TODO: the sum of numbers not divisible by m and the sum of numbers divisible by m.
 
 * ! Brute Force:

 * ? Iterate through every number from 1 to n.
 * ? Add numbers divisible by m to num2.
 * ? Add the remaining numbers to num1.
 * ? Return num1 - num2.
 * ? Time Complexity: O(n)
 * ? Space Complexity: O(1)
*/
int differenceOfSumsBF(int n, int m)
{
    int num1 = 0, num2 = 0;

    //? Traverse all numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        //? Store divisible and non-divisible sums separately
        if(i % m != 0)
        {
            num1 += i;
        }
        else
        {
            num2 += i;
        }
    }

    return num1 - num2;
}

/** 
 * ! Optimal:
 
 * ? Calculate the sum of all numbers from 1 to n.
 * ? Find how many multiples of m exist between 1 and n.
 * ? Calculate the sum of those multiples using the arithmetic series formula.
 * ? Since Non-Divisible = Total - Divisible,
 * ? Answer = (Total - Divisible) - Divisible = Total - 2 × Divisible.
 * ? Time Complexity: O(1)
 * ? Space Complexity: O(1)
*/
int differenceOfSumsOpt(int n, int m)
{
    //? Sum of all numbers from 1 to n
    int total = n * (n + 1) / 2;

    //? Number of multiples of m between 1 and n
    int k = n / m;

    //? Sum of all multiples of m
    int divisible = m * k * (k + 1) / 2;

    //? Return Non-Divisible Sum - Divisible Sum
    return total - 2 * divisible;
}

int main()
{
    int n, m;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    cout << "Brute Force: " << differenceOfSumsBF(n, m) << endl;
    cout << "Optimal    : " << differenceOfSumsOpt(n, m);

    return 0;
}