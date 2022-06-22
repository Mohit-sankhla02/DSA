#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    // pushing elements into stack

    s.push("Mohit");
    s.push("Sankhla");
    s.push("Singh");
    s.push("Kumar");
    s.push("Lahoti");

    // to get top of stack

    cout << "Top element -> " << s.top() << endl;

    // pop method

    s.pop();

    cout << "Top element -> " << s.top() << endl;

    // size of stack

    cout << "size of stack -> " << s.size() << endl;

    // empty or not function

    cout << "empty or not -> " << s.empty() << endl;

    return 0;
}