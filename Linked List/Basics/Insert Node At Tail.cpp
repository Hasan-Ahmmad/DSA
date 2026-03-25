#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int val;
    Node* next;

    Node(int val ){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, int val){ //O(N)

    Node* newnode= new Node(val);

    if(head == NULL){ // If there is no node initially
        head= newnode;
        return;
    }
    
    Node* tmp=head;
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}

void print_list(Node* head){

    Node* temp=head;

    while( temp != NULL){

        cout<<temp->val<<endl;
        temp=temp->next;
    }
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    insert_at_tail(head, 300);

    print_list(head);

}   
