#include<iostream>

using namespace std;

struct Node{
     int data;
     struct Node* next;

     Node(int data){
        this->data= data;
        next= NULL;
     }
};

struct LinkedList{

    Node* head;

    LinkedList(){
        head=NULL;
    };

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    Node* reverse(Node* head){
        if( head == NULL || head->next==NULL){
            return head;
        }

        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next=NULL;
        return rest;
    }

    void printLinkedList()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main(){

    LinkedList ll;
    ll.push(20);
    ll.push(30);
    ll.push(40);

    cout << "Given LinkedList is : " ;
    ll.printLinkedList();

    ll.head=ll.reverse(ll.head);

    cout << "\nReverse LinkedList is : ";
    ll.printLinkedList();
}
