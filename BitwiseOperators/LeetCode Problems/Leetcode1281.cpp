#include <iostream>

using namespace std;


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n>0)
        {
            int lastDigit = n%10;
            sum+=lastDigit;
            prod*=lastDigit;
            n/=10;
        }
        return (prod-sum);
    }
};

int main()
{
    int n;
    cin>>n;

    Solution s;
    cout<<s.subtractProductAndSum(n)<<endl;
    return 0;
}