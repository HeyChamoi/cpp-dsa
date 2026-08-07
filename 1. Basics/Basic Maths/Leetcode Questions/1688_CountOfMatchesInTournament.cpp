#include <bits/stdc++.h>
using namespace std;

/**
 * TODO: LeetCode 1688 - Count of Matches in Tournament
 * TODO: Given n teams in a tournament with special pairing rules,
 * TODO: return the total number of matches played until a winner is decided.
 *
 * ? Approach 1 (Simulation):
 * ? Simulate each round of the tournament according to the given rules.
 * ? If the number of teams is even:
 * ?   - n / 2 matches are played.
 * ?   - n / 2 teams advance.
 * ? If the number of teams is odd:
 * ?   - (n - 1) / 2 matches are played.
 * ?   - One team gets a bye, so ((n - 1) / 2) + 1 teams advance.
 * ? Continue until only one team remains.
 
 *! Approach 1 Time Complexity: O(log n)
 *! Space Complexity: O(1)
*/

int numberOfMatches(int n)
{
    int sum = 0, m;

    //? Simulate each tournament round
    while(n != 1)
    {
        //? If the number of teams is even
        if(n % 2 == 0)
        {
            m = n / 2;
            n = n / 2;
        }

        //? If the number of teams is odd
        else
        {
            m = (n - 1) / 2;
            n = ((n - 1) / 2) + 1;
        }

        //? Add matches played in the current round
        sum += m;
    }

    return sum;
}

/**
 * ? Optimal Approach: Every match eliminates exactly one team
 * ? Approach 2 (Optimal - Mathematical Observation):
 * ? Every match eliminates exactly one team.
 * ? Starting with n teams and ending with one winner means
 * ? exactly (n - 1) teams are eliminated.
 * ? Therefore, the total number of matches is always (n - 1).
 * ? Approach 2 Time Complexity: O(1)
*/

int numberOfMatchesOpt(int n)
{
    return n - 1;
}

int main()
{
    int n;

    cout << "Enter number of matches: ";
    cin >> n;

    cout << numberOfMatches(n);
    cout << "\n" << numberOfMatchesOpt(n);
}