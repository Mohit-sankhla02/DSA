#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        set<int> st;
        for (auto x : mp)
        {
            st.insert(x.second);
        }
        if (st.size() == mp.size())
            return true;
        return false;
    }
};

int main()
{

    // These are just here to test
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    Solution s;

    cout << s.uniqueOccurrences(arr) << endl;
    return 0;
}