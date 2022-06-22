#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // capacity and size function
    // Property of vector that size of vector always doubles after that vector is filled completely

    vector<int> v;

    //vector initialisation with known size and value of elements
    vector<int> a(5,1); 
    //size of the vector is 5 and the elements are 1
    //therefore the vector is 1 1 1 1 1


    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;

    // at function
    cout << "Element at index 2 is " << v.at(2) << endl;

    // front and back functions

    cout << "First Element -> " << v.front() << endl;
    cout << "Last Element -> " << v.back() << endl;

    //pop_back function

    cout << "Before Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "After Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    //Clearing the vector completely
    cout<<"size before clearing the vector "<<v.size()<<endl;
    v.clear();
    cout<<"size after clearing the vector "<<v.size()<<endl;

    //copying a vector into another vector
    vector<int> last(a);

    cout<<"Elements of a"<<endl;
    for(int i : a)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Elements of last"<<endl;
    for(int i : last)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}