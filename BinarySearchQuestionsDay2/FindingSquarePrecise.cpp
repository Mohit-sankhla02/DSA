#include <iostream>
#define int long long int
using namespace std;

int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s < e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int32_t main()
{
    int n;
    cout << " Enter the number : " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);

    cout << " The square root of " << n << "is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}