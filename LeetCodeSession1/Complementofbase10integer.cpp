#include <iostream>

using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        int significantBitcount = 0;
        int temp = n;
        while (temp != 0)
        {
            significantBitcount++;
            temp = temp >> 1;
        }

        int ans = ~n;
        int mask = 0;
        for (int i = 1; i <= significantBitcount; i++)
        {
            mask = mask << 1;
            mask = mask | 1;
        }

        return (ans & mask);
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.bitwiseComplement(n) << endl;
    return 0;
}