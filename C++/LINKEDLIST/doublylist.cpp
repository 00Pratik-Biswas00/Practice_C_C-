#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data = val;
        next  = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);;
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}




void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head=head->next;  
    head->prev=NULL;

    delete todelete;
}



void deletion(node* &head, int key)
{
    node* temp = head;
    if(key==1)
    {
        deleteAtHead(head);
        return;
    }
    int count=0;
    while(temp->next!=NULL && count!=key)
    {
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    
    delete temp;
}







void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null\n";
}




int main()
{
    node* head = NULL;
//    insertAtTail(head, 1);
//    insertAtTail(head, 2);
//    insertAtTail(head, 3);
//    insertAtTail(head, 4);
//    insertAtTail(head, 5);
//    insertAtTail(head, 6);

    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }



    display(head);

//    insertAtHead(head, 10);
//    display(head);
//
//    deletion(head, 4);
//    display(head);
//
//    deleteAtHead(head);
//    display(head);

    return 0;
}