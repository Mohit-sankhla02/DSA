#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    //constructor
    Node(int data)
    {
        this->data = data;
        this->next=NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "The node with data " << value << " was deleted." << endl;
    }
};

void insertNode(Node*&tail, int element, int d) {
    //empty list
    if (tail == NULL) {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        //non empty list
        Node *curr = tail;
        //What we are trying to achieve here is that we want to insert our d data after where element is found
        while(curr->data != element) {
            curr = curr->next;
        }

        //Element found - curr is representing element wala value
        Node*temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node*tail) {
    Node *temp = tail;

    if (tail == NULL)
    {
        cout<<"The list is empty Now! Insert some nodes!!"<<endl;
        return;
    }

    // while (temp->next != tail) {
    //     cout<<temp->data<<" ";
    //     temp = temp -> next;
    // }
    // cout<<temp->data<<" ";

    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int element) {
    //empty node
    if (tail == NULL)
    {
        cout<<"list is empty! please check again!"<<endl;
        return;
    }

    else {
        //case in non-empty list

        //assuming that the value is present in the linked list
        Node *prev = tail;
        Node*curr = prev->next;

        while(curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //deleting the first element is handled bgy this
        if (tail == curr)
        {
            tail = prev;
        }

        else if (curr == prev)
        {
            tail = NULL;
        }

        curr->next = NULL;
        delete curr;
    }
    
}

int main()
{
    Node *tail = NULL;
    // insertNode(tail, 5, 5);
    // print(tail);
    // insertNode(tail, 5, 3);
    // print(tail);
    // insertNode(tail, 3, 2);
    // print(tail);
    // insertNode(tail, 2, 1);
    // print(tail);
    // insertNode(tail, 1, 0);
    // print(tail);
    insertNode(tail, 0, -1);
    print(tail);

    cout<<"Deletion :- "<<endl;

    deleteNode(tail, -1);
    print(tail);
    return 0;
}