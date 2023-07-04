#include<bits/stdc++.h>
using namespace std;

class link{
public:
    int data;
    link* next;
    link(int val)
    {
        data=val;
        next=NULL;
    }
};

void insert_tail(link* &head,int val)
{
        link* temp=new link(val);
        if(head==NULL)
        {
            head=temp;
            return ;
        }
        link* last=head;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;

}

void insert_head(link* &head,int val)
{
   link* temp=new link(val);
   temp->next=head;
   head=temp;
}

void delete_tail(link*head)
{
    link* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    link* del=temp->next;
    temp->next=NULL;
    delete del;
}

void delete_head(link*& head)
{
    if(head==NULL)
    {
        return;
    }
    link*temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;

}

int len(link*head)
{
    int num=0;
    link*temp=head;
    while(temp!=NULL)
    {
        num++;
        temp=temp->next;
    }
    return num;
}

void appen_k(link*&head,int k)
{
    int l=len(head);
    link* temp=head;
    link* new_start;
    link* new_end;
    int num=1;
    while(temp->next!=NULL)
    {
        if(num==l-k)
        {
            new_end=temp;
        }
        if(num==l-k+1){
            new_start=temp;
        }
        temp=temp->next;
        num++;
    }
    new_end->next=NULL;
    temp->next=head;
    head=new_start;
}

void rev(link*&head)
{
    link* prev=NULL;
    link* curr=head;
    link* forw=head->next;
    while(curr!=NULL)
    {
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    head=prev;
}

void display(link*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main ()
{
    int k=1;
    link* ptr=NULL;
    insert_tail(ptr,5);
    insert_tail(ptr,10);
    insert_tail(ptr,15);
    insert_tail(ptr,20);
    insert_tail(ptr,25);
    insert_tail(ptr,30);
    appen_k(ptr,k);
    display(ptr);
}
