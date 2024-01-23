

#include <iostream>

using namespace std;

template <typename T>
class Node {
public:
    T val;
    Node<T>* next;

    Node(T val) {
        this->val = val;
        this->next = nullptr;
    }

    Node<T>* operator[](int index) {
        Node<T>* cur_node = this;
        for (int i = 0; i < index; i++) {
            cur_node = cur_node->next;
        }
        return cur_node;
    }
};

template <typename T>
class LinkedList {
public:
    Node<T>* head;

    LinkedList() {
        this->head = nullptr;
    }

    void addNode(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (this->head == nullptr) {
            this->head = newNode;
        }
        else {
            Node<T>* cur_node = this->head;
            while (cur_node->next != nullptr) {
                cur_node = cur_node->next;
            }
            cur_node->next = newNode;
        }
    }

    void deleteNode(int index) {
        if (this->head == nullptr) {
            return;
        }
        Node<T>* cur_node = this->head;
        if (index == 0) {
            this->head = cur_node->next;
            delete cur_node;
            return;
        }
        for (int i = 0; cur_node != nullptr && i < index - 1; i++) {
            cur_node = cur_node->next;
        }
        if (cur_node == nullptr || cur_node->next == nullptr) {
            return;
        }
        Node<T>* next_node = cur_node->next->next;
        delete cur_node->next;
        cur_node->next = next_node;
    }


    void addNode(T val, int index) {
        Node<T>* newNode = new Node<T>(val);
        if (this->head == nullptr) {
            this->head = newNode;
        }
        else {
            Node<T>* cur_node = this->head;
            for (int i = 0; cur_node != nullptr && i < index - 1; i++) {
                cur_node = cur_node->next;
            }
            if (cur_node == nullptr) {
                return;
            }
            newNode->next = cur_node->next;
            cur_node->next = newNode;
        }
    }

    void printList() {
        Node<T>* cur_node = this->head;
        while (cur_node != nullptr) {
            cout << "[Add: " << cur_node << ", val: " << cur_node->val << ", next: " << cur_node->next << "]" << endl;
            cur_node = cur_node->next;
        }
    }

    Node<T>* getNode(int index) {
        Node<T>* cur_node = this->head;
        for (int i = 0; i < index; i++) {
            cur_node = cur_node->next;
        }
        return cur_node;
    }

    Node<T>* operator[](int index) {
        return getNode(index);
    }
};

int main() {
    LinkedList<int> ll;
    ll.addNode(1);
    cout << "Node1:" << endl;
    ll.printList();

    ll.addNode(2);
    cout << endl << "Node2:" << endl;
    ll.printList();

    ll.addNode(3);
    cout << endl << "Node1&2&3:" << endl;
    ll.printList();

    ll.deleteNode(1);
    cout << endl << "Node1&3:" << endl;
    ll.printList();


    ll.addNode(2, 1);
    cout << endl << "Node1&2&3:" << endl;
    ll.printList();

    
    cout << endl << "Accessing nodes using operator[]" << endl;
    cout << "Node at index 0: " << ll[0]->val << endl;
    cout << "Node at index 1: " << ll[1]->val << endl;
    cout << "Node at index 2: " << ll[2]->val << endl;

    return 0;
}

