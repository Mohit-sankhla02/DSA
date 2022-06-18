// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>

using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid]) // right mein jao
        {
            s = mid + 1;
        }

        else if (key < arr[mid]) // left mein jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid]) // right mein jao
        {
            s = mid + 1;
        }

        else if (key < arr[mid]) // left mein jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2};
    int n = sizeof(even) / sizeof(int);
    cout << firstOccurence(even, n, 2) << endl;
    ;
    cout << lastOccurence(even, n, 2);
    return 0;
}