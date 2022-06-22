#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for(auto i : s)
    {
        cout<<i<<" ";
    }cout<<endl;

    //iterator in set 
    set<int>::iterator it = s.begin();

    it++;
    s.erase(it);
    for(int i : s)
    {
        cout<<i<<" ";
    }cout<<endl;
    s.insert(5);

    //count function

    cout<<"5 present or not -> "<<s.count(5)<<endl;
    cout<<"-5 present or not -> "<<s.count(-5)<<endl;

    //find function - finding 5 in set

    set<int>::iterator itr = s.find(5);
    cout<<"value present at iterator "<<*itr<<endl;

    return 0;
}