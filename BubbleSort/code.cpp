#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++)
    {
        bool swapped = false;
        //for round 1, 2 upto n-1
        for(int j=0;j<n-1;j++)
        {
             if (arr[j] > arr[j+1])
             {
                 swap(arr[j], arr[j+1]);
                 swapped = true;
             }
        }
        if(swapped == false)
            break;
    }
}
