// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540
#include <iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageCount + arr[i] <= mid)
        {
            pageCount += arr[i];
        }

        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }

            pageCount = arr[i];
        }
    }
    return true;
}

int minBookAlloc(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);
    int m = 2;
    cout << minBookAlloc(arr, n, m) << endl;
    return 0;
}
