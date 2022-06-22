#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back(); // 1 gets removed

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.push_back(1); // original deque gets restored

    d.pop_front();

    for (int i : d)
        cout << i << " ";

    d.push_front(2);

    // at function

    cout << "First Index element " << d.at(1) << endl;

    // front and back functions

    cout << "First element of the deque " << d.front() << endl;
    cout << "Last element of the deque " << d.back() << endl;

    // empty function

    cout << "Empty or not " << d.empty() << endl;

    //erase function
    cout<<"size before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"size after erase"<<d.size()<<endl;

    //element left after erasing must be 1
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}