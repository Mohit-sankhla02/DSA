// https://www.codingninjas.com/codestudio/problems/painter-s-partition-problem_1089557?leftPanelTab=1
#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &boards, int n, int k, int mid)
{
    int boardCount = 1;
    int paintCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (boards[i] + paintCount <= mid)
        {
            paintCount += boards[i];
        }

        else
        {
            boardCount++;
            if (boardCount > k || boards[i] > mid)
            {
                return false;
            }
            paintCount = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int n = boards.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    cout<<" Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<endl;
    vector<int> boards(n);
    cout<<" Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>boards[i];
    }
    cout<<endl;
    cout<<" Enter the number of boards: ";
    int k;
    cin>>k;
    cout<<endl;

    cout<<"The answer is: "<<findLargestMinDistance(boards, k)<<endl;

    return 0;
}