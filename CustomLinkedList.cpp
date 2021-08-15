#include <bits/stdc++.h>
using namespace std;

template<typename T> class CustomLinkedList{
    // Members of Linked List class
    struct Node{
        T data;
        Node *next;
    };
    
    Node *head;
    Node *tail;
    int len;
    
    public:
    CustomLinkedList(){
        head = new Node();
        tail = head;
        len = 0;
    }
    
    // Method to insert new element into linked list
    void insert(T element){
        if(len == 0){
            head->data = element;
            head->next = NULL;
        }else{
            Node *temp = new Node();
            temp->data = element;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
        len += 1;
    }
    
    //Method to return size of LL
    void size(){
        return len;
    }
    
    // Method to print LL
    void print(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
    
};

int main() {
	cout<<"Testing my custom linked list class \n";
	CustomLinkedList<int> ll;
	ll.insert(11);
	ll.insert(6);
	ll.insert(52);
	ll.print();
	return 0;
}
