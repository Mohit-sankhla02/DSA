//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554
#include <iostream>

using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        
        mid = s + (e-s)/2;
    }
    return s;
}

int findTarget(int arr[], int n, int target)
{
    int pivot = getPivot(arr,n);
    if (target >= arr[pivot] && target <= arr[n-1])
    {
        int s = pivot;
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s<=e)
        {
            if (arr[mid] == target)
            {
                return mid;
            }

            else if (arr[mid] > target)
            {
                e = mid-1;
            }

            else
            {
                s = mid + 1;
            }
        }

    }

    else
    {
        int s = 0;
        int e = pivot-1;

        int mid = s + (e-s)/2;

        while (s<=e)
        {
            if (arr[mid] == target)
            {
                return mid;
            }

            else if (target < arr[mid])
            {
                e = mid-1;
            }

            else
            {
                s = mid + 1;
            }
            
            mid = s + (e-s)/2;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 5, 6, 8, 9, 1};
    int n = 7;
    int target = 2;
    cout<<findTarget(arr, n, target)<<endl;
}