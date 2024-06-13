#include <iostream>
using namespace std;

// Structure of Node
class Node
{
public:
    // Node Contain 2 Parts 
    int data; // Data 
    Node *next; // Store the Address of next Node which is Pointer.
    
    // Constuctor
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};
int main()
{
    // Create Node
    Node *node1 = new Node(10);
    cout << node1->data << " " << node1->next<<endl;
    return 0;
}

