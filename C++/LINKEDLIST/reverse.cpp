#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};





void insertAtTail(node* &head, int  val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head  = n;
        return;
    }
    node* temp  =  head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next =  n;
}

// reverse using  iterator

//node* reverse(node* head)
//{
//    node* preptr = NULL;
//    node* currptr = head;
//    node* nextptr;
//
//    while(currptr!=NULL)
//    {
//        nextptr  = currptr->next;
//        currptr->next = preptr;
//
//        preptr = currptr;
//        currptr = nextptr;
//    }
//    return preptr;
//}







// reverse using  recursion


node* reverseRecurse(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head ;
    }

    node* headnew = reverseRecurse(head->next);
    head->next->next = head;
    head->next = NULL;

    return  headnew;
}


void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}





int main()
{
    node*  head  = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

//    node* newhead = reverse(head);
//    display(newhead);


    node* NEWhead = reverseRecurse(head);
    display(NEWhead);

    return 0;
}

