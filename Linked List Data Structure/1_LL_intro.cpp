// Linked List(LL): Random Allocation of Memeory
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
    // statically

    Node n1(10);
    Node *head = &n1;

    Node n2(2);
    Node n3(8);
    Node n4(6);
    Node n5(3);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // n5.next = NULL;

    // cout << n1.data << " " << n2.data << " " << n3.data << " " << n4.data << " " << n5.data << " ";
    // cout << endl;
    // Node *head = &n1;
    // cout << head->data;

    cout << endl;

    // Dynamically
    Node *n3 = new Node(3);
    Node *n4 = new Node(5);

    // n3->next=n4;

    return 0;
}