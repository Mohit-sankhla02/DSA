// wap to sort 0 0 1 0 1 1 0 1 1 0 1 1 0 in minimum possible time
#include <iostream>

using namespace std;

void specialSort(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }

        else if (arr[j] == 1)
        {
            j--;
        }

        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[] = {0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    specialSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}