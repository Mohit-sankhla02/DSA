#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {1,2,3};

    array<int, 4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
    

    //at function

    cout<<"Element at index 2 is-> "<<a.at(2)<<endl;

    //Empty or not

    (a.empty()) ? cout<<"Array is empty"<<endl : cout<<"Array is not empty"<<endl ;

    //First Element

    cout<<"First Element: "<<a.front()<<endl;

    //Last Element

    cout<<"Last Element: "<<a.back()<<endl;

    

    return 0;
}