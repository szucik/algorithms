#include <iostream>
using namespace std;

class Node {
    public: 
        int value;
        Node* next;

        Node() {
            this->next = nullptr;
        };
};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        int size;

        LinkedList(int value) {
            Node* newNode = new Node();
            newNode->value = value;
            this->head = newNode;
            this->tail = newNode;
            this->size = 1; 
        }

        void addElement(int value) {
            Node* newNode = new Node();
            this->tail->next = newNode;
            this->tail = newNode;
            newNode->value = value;
            this-> size++;
        };

        void displayList(){
            Node* node = this->head;
            cout << node->value << endl;
            while (node->next != nullptr)
            {
               cout << node->value << endl;
            }
            

        };
};



int main(){
   LinkedList ll = LinkedList(10);
   ll.addElement(20);
   ll.addElement(40);
   ll.addElement(40);
   ll.addElement(40);
   ll.addElement(40);
    ll.displayList();
    return 0;
};