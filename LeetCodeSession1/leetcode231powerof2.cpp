#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int bitCount = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                bitCount++;
            }
            n /= 2;
        }

        if (bitCount == true)
        {
            return true;
        }

        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.isPowerOfTwo(n) << endl;
    return 0;
}