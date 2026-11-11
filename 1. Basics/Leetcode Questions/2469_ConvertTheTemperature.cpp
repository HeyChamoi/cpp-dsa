#include <bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double celsius) 
{
    double ans[2];
    ans[0]=celsius + 273.15;
    ans[1]=celsius * 1.8 + 32;
    return {ans[0],ans[1]};
}

int main()
{
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    vector<double> ans = convertTemperature(celsius);

    cout << "Temperature in Kelvin: " << ans[0] << endl;
    cout << "Temperature in Fahrenheit: " << ans[1] << endl;

    return 0;
}