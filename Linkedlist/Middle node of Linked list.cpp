// Print Middle Node of a linked list
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

                                //Middle node of linked list
link* mid(link*ptr)
{
    int l=len(ptr);
    int m=(l/2)+1;
    int con=1;
    link*temp=ptr;
    while(con<m)
    {
        temp=temp->next;
        con++;
    }
    return temp;
}

                                 //Floyd's Algorithm to find Middle node
link* floy_mid_node(link*ptr)
{
    link*fast=ptr;
    link*slow=ptr;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

int main ()
{
    link* ptr=NULL;
    link* ptr2=NULL;
    insert_tail(ptr2,3);
    insert_tail(ptr,5);
    insert_tail(ptr,10);
    insert_tail(ptr,15);
    insert_tail(ptr,20);
    insert_tail(ptr,25);
    insert_tail(ptr,30);
    insert_tail(ptr2,6);
    insert_tail(ptr2,12);
    link* mid_node=mid(ptr);             //By brute force method to find middle node
    link* floy_mid=floy_mid_node(ptr);   //Efficient method
    cout<<mid_node->data<<endl;
    cout<<floy_mid->data<<endl;
}
