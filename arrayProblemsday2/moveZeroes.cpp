#include <bits/stdc++.h>

using namespace std;

void moveZeroes(int arr[], int n)
{
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=1;i<=n-temp.size();i++)
    {
        temp.push_back(0);
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i];
    }   
}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7] = {0,1,0,3,12};
    int n = 7;
    moveZeroes(arr,n);
    print(arr,n);
    return 0;
}