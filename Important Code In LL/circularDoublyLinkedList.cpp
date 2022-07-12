#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Node was deleted with data as " << value << endl;
    }
};

void insertNode(Node *&tail, int beforeInserted, int d) {
    //empty list
    if (tail == NULL) {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }

    else 
    {
        //non empty list
        Node *curr = tail;
        while (curr->data != beforeInserted) {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;

    }
}

void deleteNode(Node *&tail, int beforeInserted) {
    //empty list
    if (tail == NULL) {
        cout<<"Empty List"<<endl;
        return;
    }

    Node *curr = tail;

    while (curr->data != beforeInserted) {
        // prev = curr;
        curr = curr->next;
    }
    Node *prev = curr->prev;

    prev->next = curr->next;
    curr->next->prev = prev;

    if (tail == curr) {
        tail = prev;
    }

    if (prev == curr) {
        tail = NULL;
    }

    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

void print(Node *tail) {
    Node *temp = tail;

    if (tail == NULL) {
        cout<<"Empty List"<<endl;
        return;
    }

    do {    
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main() {
    Node *tail = NULL;
    insertNode(tail, 1, 0);
    print(tail);
    insertNode(tail, 0, 1);
    print(tail);
    insertNode(tail, 1, 2);
    print(tail);
    insertNode(tail, 2, 3);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 4, 5);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    insertNode(tail, 6, 7);
    print(tail);
    deleteNode(tail, 0);
    print(tail);
    return 0;
}