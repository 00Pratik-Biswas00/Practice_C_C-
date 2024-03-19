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

int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}


node* kappend(node* &head,int k)
{
    node* newtail;
    node* newhead;
    node* tail = head;

    int l=length(head);
    int count=1;
    k=k%l;
    while(tail->next!=NULL)
    {
        if(count==(l-k))
        {
            newtail=tail;
        }
        if(count==(l-k+1))
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;

    return  newhead;
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

    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);

    node* newhead = kappend(head,3);
    display(newhead);



    return 0;
}