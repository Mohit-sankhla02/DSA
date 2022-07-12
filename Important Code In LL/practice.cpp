#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next!=NULL) {
            delete next;
            next = NULL;
        }
        cout << "Node with value " << value << " was deleted. " << endl;
    }
};

void print(Node *tail) {
    Node *temp = tail;

    if (tail == NULL) {
        //list is empty
        cout << "List is empty " << endl;
        return;
    }

    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << "\n";
}

void insertNode(Node *&tail, int element, int d) {
    if (tail == NULL) {
        //list is empty
        Node *onlyNode = new Node(d);
        tail = onlyNode;
        onlyNode->next = onlyNode;
    }   

    else {
        Node *curr = tail;

        while (curr->data != element) {
            curr=curr->next;
        }

        //element found -> curr is representing element wala node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

int main() {

    Node *tail = NULL;
    print(tail);
    insertNode(tail, 0, 1);
    print(tail);
    deleteNode(tail, 1);
    print(tail);
    // print(tail);
    // insertNode(tail,1,2);
    // print(tail);
    // insertNode(tail,2,3);
    // print(tail);
    // insertNode(tail,3,4);
    // print(tail);
    // insertNode(tail,4,5);
    // print(tail);
    // insertNode(tail,5,6);
    // print(tail);
    // insertNode(tail,6,7);
    // print(tail);
    // insertNode(tail,7,8);
    // print(tail);
    // insertNode(tail,8,9);
    // print(tail);
    // deleteNode(tail, 1);
    // print(tail);
    return 0;
}