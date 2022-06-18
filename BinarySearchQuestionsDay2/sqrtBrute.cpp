#include <iostream>

using namespace std;

int sqrt(int n)
{
    int ans;
    for(int i=0;i*i<=n;i++)
    {
        ans = i;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<sqrt(n)<<endl;
    return 0;
}