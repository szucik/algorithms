#include <iostream>
using namespace std;

class Node {
    public: 
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            this->next = nullptr;
        };
};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        int size;

        LinkedList(int value) {
            Node* newNode = new Node(value);
            this->head = newNode;
            this->tail = newNode;
            this->size = 1; 
        }

        void addElement(int value) {
            Node* newNode = new Node(value);
            this->tail->next = newNode;
            this->tail = newNode;
            this-> size++;
        };

        void displayList(){
           Node* node = this->head;
            while(node!= nullptr){
                cout << node->value <<endl;
                node = node->next;
            }
        }

        void deleteLast(){
            Node* head = this->head;
            Node* penultimateElement = nullptr;
            while(head!= this->tail) {
                penultimateElement = head;
                head = head->next;
            }
            delete this->tail;   
            this->tail = penultimateElement;
            this->tail->next = nullptr;
            this->size--; 
            cout << this->size << endl;
        }
};



int main(){
   LinkedList ll = LinkedList(10);
   ll.addElement(20);
   ll.addElement(300);
   ll.deleteLast();
    return 0;
};