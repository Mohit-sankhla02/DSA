#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void bruteForce(int arr[], int n)
{
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_ele = max(max_ele, arr[i]);
    }
    int count[max_ele];
    for (int i = 0; i < max_ele; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[i] == 1)
        {
            cout << i << endl;
            return;
        }
    }
}

void optimised(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans xor arr[i];
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        optimised(arr, n);
    }
    return 0;
}