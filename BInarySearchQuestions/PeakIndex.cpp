//https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include <iostream>

using namespace std;

int findi(int arr[], int n)
{
    int ans;
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<e)
    {
        if (arr[mid] < arr[mid +1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    ans = e;
    return ans;
}

int main()
{
    int arr[] = {0,1,5,4,3,2,1};

    int n = sizeof(arr)/sizeof(int);

    cout<<findi(arr,n)<<endl;
    return 0;
}