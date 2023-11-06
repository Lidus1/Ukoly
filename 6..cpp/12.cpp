// vytvoření linklistu pomocí node 
// v linklistu je uložené číslo a ukazatel na další číslo
// poslední číslo ukazuje na první číslo
// zavolání funkce node


#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void printNode(Node* node);
Node* newNode(int val);
Node* addNextNode(int val, Node* node1);

int main ()
{
    // create the first node
    Node* head = newNode(1);

    // add the second node
    Node* second = addNextNode(2, head);

    // add the third node
    Node* third = addNextNode(3, second);

    // make the last node point to the first node
    third->next = head;

    // print the nodes
    printNode(head);
    printNode(second);
    printNode(third);

    return 0;
}

// create a new node between two nodes and return the new node
Node* addNextNode(int val, Node* node1)
{
    Node* node2 = newNode(val);
    node1->next = node2;
    return node2;
}

// create a new node and return it
Node* newNode(int val)
{
    Node* node = new Node;
    node->data = val;
    node->next = NULL;
    return node;
}

void printNode(Node* node)
{
	cout << "[Add: " << node << ", val: " << node->data << ", next: " << node->next << "]" << endl;
	if (node->next != NULL) printNode(node->next);
}


























