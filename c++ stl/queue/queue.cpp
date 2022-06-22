#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Mohit");
    q.push("Sankhla");
    q.push("Is");
    q.push("Dumb");
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First element after popping element "<<q.front()<<endl;
    return 0;
}