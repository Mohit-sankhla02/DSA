#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "node with data :" << val << " was deleted." << endl;
    }
};

// Traversing the Linked List
void print(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
}

// Calculating the length of the Linked List

int len(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = head;
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        head = tail;
        return;
    }

    Node *newNode = new Node(d);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insertion at start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    // creating a new node for d;
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting head
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *temp = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            temp = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            tail = temp;
        }
        curr->prev = NULL;
        temp->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    insertAtHead(tail, head, 5);
    print(head, tail);

    insertAtTail(head, tail, 4);

    print(head, tail);

    insertAtPosition(head, tail, 2, 55);

    print(head, tail);

    insertAtPosition(head, tail, 5, 595);

    print(head, tail);

    deleteNode(5, head, tail);

    print(head, tail);

    return 0;
}