#include <iostream>
#define int uint32_t
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            if(n&1)
            {
                count++;
            }
            n = (n>>1);
        }
        return count;
    }
};

int32_t main()
{
	int n;
	cin>>n;

	Solution s;
	cout<<s.hammingWeight(n)<<endl;

	return 0;
}