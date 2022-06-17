#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2; // used to keep the values of mid in range on integer i.e., 2^31-1

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // can be avoided when solving using recursion
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int key = 8;
    cout << "In Even " << binarySearch(even, 6, key) << endl;
    cout << "In Odd " << binarySearch(odd, 5, key) << endl;

    return 0;
}