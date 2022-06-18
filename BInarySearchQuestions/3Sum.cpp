#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int target;
        cin>>target;

        vector<vector<int> > ans;
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                for(int k = j+1;k<n;k++)
                {
                    if (arr[i] + arr[j] + arr[k] == target)
                    {
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        sort(temp.begin(), temp.end());
                        ans.push_back(temp);
                    }
                    
                }
            }
        }

        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}