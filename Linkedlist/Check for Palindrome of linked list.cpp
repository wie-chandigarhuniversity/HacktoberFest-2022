//Check if the Linked list is Palindrome
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val)
    {
      data=val;
      next=NULL;
    }
};

void insertion(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }

    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

node* reverse_it(node*&head)
{
    if(head->next==NULL)
    {
        return head;
    }
    node*prev=head;
    node*curr=head->next;
    node*new_head=reverse_it(curr);
    curr->next=prev;
    prev->next=NULL;
    return new_head;
}
                      /* reverse given linked from middle node till the last node and check if the
                      node from start match with nodes of reverse list till reverse becomes NULL */
bool check_palindrome(node*head)
{
    if(head==NULL || head->next==NULL)return true;
    bool flag=0;
    node*fast=head;
    node*slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    node* rev=reverse_it(slow->next);
    node* start=head;
    while(rev!=NULL)
    {
        if(rev->data!=start->data)flag=1;
        rev=rev->next;
        start=start->next;
    }
    if(flag==0)
    {
        return true;
    }
    return false;
}

void display(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,5);
    insertion(head,2);
    insertion(head,1);
    display(head);
    //node*newhead=reverse_it(head);
    //display(newhead);
    cout<<check_palindrome(head);
    return 0;

}
