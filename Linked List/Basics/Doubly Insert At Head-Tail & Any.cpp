#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void Print_forward(Node* head){

    Node* tmp=head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_at_head(Node* &head, Node* &tail){

    Node* newnode = new Node(500);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_at_tail(Node* &head, Node* &tail){

    Node* newnode = new Node(700);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insert_at_any(Node* head, int idx){

    Node* newnode = new Node(800);
    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    newnode->prev=tmp;
    tmp->next=newnode;
    newnode->next->prev=newnode;
}


int main(){

    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* tail =new Node(40);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b; 

    insert_at_head(head,tail);

    insert_at_tail(head,tail);

    insert_at_any(head, 3);

    Print_forward(head);

}
