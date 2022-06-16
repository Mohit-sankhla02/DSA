#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(12);
    vec.push_back(11);
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    Solution s;
    vector<int> ans = s.findDuplicates(vec);
    for (auto element : ans)
    {
        cout << element << " ";
    }
    return 0;
}