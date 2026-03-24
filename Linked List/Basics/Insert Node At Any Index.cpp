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

void insert_at_any(Node* &head,int idx, int val){

    Node* newnode= new Node(val);
    Node* tmp=head;
    for(int i=0; i<idx-1; i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
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

    int idx=2;

    insert_at_any(head,idx, 100);
    
    print_list(head);

}   
