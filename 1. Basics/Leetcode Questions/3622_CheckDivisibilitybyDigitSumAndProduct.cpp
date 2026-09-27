#include <bits/stdc++.h>
using namespace std;
bool checkDivisibility(int n)
{
    int num = n;
    int x = n;
    int sum = 0, prod = 1, total;
    while (n != 0)
    {
        num = n % 10;
        sum += num;
        prod *= num;
        n = n / 10;
    }
    total = sum + prod;
    if (x % total == 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<checkDivisibility(n);
    return 0;
}