#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int n=arr1.size();
        int m=arr2.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int valid=0;
            for(int j=0;j<m;j++)
            {
                int ans=abs(arr1[i]-arr2[j]);
                if (ans<=d)
                break;
                valid++;   
            }
            if (valid==m)
            count++;
        }
        return count;
    }
};

int main()
{
    Solution s1;
    int n,m,d;

    cout<<"Enter size of array 1: ";
    cin>>n;
    cout<<"Enter size of array 2: ";
    cin>>m;
    cout<<"\n\n";

    vector<int>arr1(n),arr2(m);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" of array 1: ";
        cin>>arr1[i];
    }

    cout<<"\n\n";

    for(int i=0;i<m;i++)
    {
        cout<<"Enter element "<<i+1<<" of array 2: ";
        cin>>arr2[i];
    }
    
    cout<<"\n\n";
    cout<<"Enter Distance: ";
    cin>>d;

    int x=s1.findTheDistanceValue(arr1,arr2,d);
    cout<<x;
}