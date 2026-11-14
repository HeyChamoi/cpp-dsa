#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
        for (int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if(nums[i]+nums[j]==target)
                return{i,j};
            }
        }
        return{};
    }
};

int main()
{
    int size, target;

    cout << "Enter size of array: ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

Solution s1;
    vector<int> result = s1.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No valid pair found." << endl;
    }

    return 0;
}