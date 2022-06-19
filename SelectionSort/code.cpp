#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;
        for (int j = i+1;j<n;j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    selectionSort(arr, n);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}