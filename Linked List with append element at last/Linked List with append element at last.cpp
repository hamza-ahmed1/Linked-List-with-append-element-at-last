// Linked List with append element at last.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Node {

public:
    int data;
    Node* nextaddress;
    Node(int data)
    {
        this->data = data;
        this->nextaddress = NULL;
    }

 
};
class LinkedList {

public :
    Node* head;
    LinkedList() {
        head = NULL;
    }
    void append(int _data) {
        //create an pointer new node and points to Node's object in heap
        Node* newnode = new Node(_data);
        //if there is only object declaration in main so definitly head is null 
        // but after calling append the head has newnode object's adrress and not null now: 
        if (!head) {
            head = newnode;
            return;
        }

        Node* current = head;
        while (current->nextaddress)
        {
            current = current->nextaddress;
        }

        current->nextaddress = newnode;
    }

    void print() {
        while (head)
        {
            cout << head->data<<"  ";
            head = head->nextaddress;
        }
    }

};

int main()
{
    LinkedList l1;
    l1.append(1);
    l1.append(2);
    l1.append(2);
    l1.append(2);
    l1.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
