// single linked list
#include<iostream>
#include<cmath>
using namespace std;

class Node {
    int data;
    Node* next;
public:
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    void insertAtHead(Node* &head) {
        cout << "=================================" << endl;
        int val;
        cout << "Enter value to insert at head: ";
        cin >> val;

        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        cout << "inserted at head." << endl;
    }
    void insertAtMid(Node* &head) {
        cout << "=================================" << endl;
        int val, index;
        cout << "Enter value to insert at mid: ";
        cin >> val;
        cout << "Enter index to insert at mid: ";
        cin >> index;

        Node* newnode = new Node(val);
        if(head == NULL && (index > 1 || index <= 0)) {
            cout << "LL is empty, index not found!!" << endl;
        }
        else if(head == NULL || index == 1) {
            head = newnode;
        }
        else {
            int traverse = index-2;
            Node* temp = head;
            while(traverse-- && temp != NULL) {
                temp = temp->next;
            }
            Node* tempnext = temp->next;
            temp->next = newnode;
            newnode->next = tempnext;
            // incomplete
        }
    }
    void insertAtEnd(Node* &head) {
        cout << "=================================" << endl;
        int val;
        cout << "Enter data to insert at end: ";
        cin >> val;
        
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = newnode;
        }
        else {
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout << "inserted at end." << endl;
    }

    //delete in next class.

    void checkPrimeOrNot(Node* head) {
        while(head != NULL)
        {
            if(head->data < 2) {
                cout << head->data << " not a prime number." << endl;
                head = head->next;
                continue;
            }
            bool check = true;
            for(int i = 2; i <= sqrt(head->data); i++) {
                if(head->data % i == 0) {
                    check = false;
                }
            }
            if(check == true) cout << head->data << " is a prime number." << endl;
            else cout << head->data << " is not a prime number." << endl;

            head = head->next;
        }
    }
    void print(Node* head) {
        cout << "Displaying LL: ";
        Node* temp = head;
        while(temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
} *head = NULL;

int main() {
    Node* ll;
    ll->insertAtHead(head);
    ll->insertAtHead(head);
    ll->insertAtHead(head);

    ll->print(head);

    ll->insertAtEnd(head);
    ll->insertAtEnd(head);
    ll->insertAtEnd(head);

    ll->print(head);

    ll->insertAtMid(head);

    ll->print(head);

    cout << "========= prime numbers in current LL =========" << endl;
    ll->checkPrimeOrNot(head);

    return 0;
}