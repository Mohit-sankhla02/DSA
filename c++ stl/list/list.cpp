#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase function

    cout << "size before erase " << l.size() << endl;

    l.erase(l.begin());

    cout << "size after erase " << l.size() << endl;

    // printing after erase

    for (int i : l)
    {
        cout << i << " ";
    }cout<<endl;

    // another method to initialize list
    cout<<"another list initialized differently"<<endl;
    list<int> l2(5, 100);
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}