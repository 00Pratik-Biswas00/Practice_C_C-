#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;

    }

};

void insertAtTail(node* &head, int val)
{
    
    node* n = new node(val);
    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp  = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

// to  delete head

void deleteHead(node* &head)
{
    node* headdelete = head;
    head =  head->next;
    delete headdelete;
}

// to  delete middle


void deleteMiddle(node* &head, int val)
{

// if list is null

    if(head==NULL)
    {
        return;
    }

// if list has only one element 

    if(head->next==NULL)
    {
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}




void display(node* head){
    node* temp  = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

// to  delete middle

    deleteMiddle(head,2);
    display(head);

// to  delete head

    deleteHead(head);
    display(head);
    return 0;
}

