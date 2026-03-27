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

// For taking input. Take least 5 input to execute all functions
void insert_at_tail(Node* &head, Node* &tail, int val){

    Node* newnode = new Node(val);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void Print_forward(Node* head){ //for printing the list

    Node* tmp=head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void delete_at_head(Node* &head, Node* &tail){

    Node* deletenode = head;
    head=head->next;
    delete deletenode;
    if(head == NULL){
        tail=NULL;
        return;
    }
    head->prev=NULL;
}

void delete_at_tail(Node* &head, Node* &tail){

    Node* deletenode = tail;
    tail= tail->prev;
    delete deletenode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_any(Node* head, int idx){

    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp=tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){

        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    delete_at_head(head,tail);

    delete_at_tail(head,tail);

    delete_at_any(head,1);

    Print_forward(head);

}
