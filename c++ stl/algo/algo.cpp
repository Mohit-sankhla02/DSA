#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<"finding 6 -> "<<binary_search(v.begin(), v.end(), 6)<<endl;
    cout<<"lower bound -> "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"upper bount -> "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    int a= 5;
    int b = 6;

    cout<<"max of a,b"<<max(a,b)<<endl;
    cout<<"min of a,b"<<min(a,b)<<endl;

    string abcd = "abcd";
    cout<<"before reversing => "<<abcd<<endl;
    reverse(abcd.begin(), abcd.end());
    cout<<"after reversing => "<<abcd<<endl;
    //----------------------------------------
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //rotating a vector
    cout<<"vector before rotating: - ";
    for(int i : v)
    {
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(), v.begin()+2, v.end());

    for(int i : v)
    {
        cout<<i<<" ";
    }cout<<endl;
    

    return 0;
}