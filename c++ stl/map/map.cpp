#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Mohit";
    m[2] = "Sankhla";
    m[13] = "Kumar";


    for(auto i : m)
    {
        cout<<i.first<<" ";
    }cout<<endl;

    //also a method for inserting elements in map
    m.insert( {5,"bheem"});

    for(auto i : m)
    {
        cout<<i.first<< "==" << i.second <<endl;
    }
    cout<<"\n";
    cout<<"finding 13 "<<m.count(13)<<endl;

    //before erase
    for(auto i : m)
      {
        cout<<i.first<<" "<<i.second<<endl;
      }cout<<endl;

    m.erase(13);

  //after erase
  for(auto i : m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;

  m.insert({9, "Lahoti"});

  auto it = m.find(5);

  for(auto itr = it;itr!=m.end();itr++)
    {
      cout<<(*itr).first<<endl;
    }
  
    return 0;
}