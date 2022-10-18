#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
}
*first = NULL, *second=NULL, *third=NULL;

void create(int arr[], int n){
    int i;
    Node *t, *last;
    first = new Node;    // creates a new node and first will be pointing on that one
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int arr[], int n){
    int i;
    Node *t, *last;
    second = new Node;    // creates a new node and first will be pointing on that one
    second->data = arr[0];
    second->next = NULL;
    last = second;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(Node *p)
{
    while (p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

void merge(Node *p, Node *q)
{
    Node *last;
    if(p->data < q->data)      // this if-else is performed for first starting element that this is small so that third will point
    {
        third = last = p;
        p=p->next;
        third->next = NULL;
    }
    else
    {
        third = last  = q;
        q = q->next;
        third->next = NULL;
    }

    while(p && q)              // this while loop execute for whole element in the array
    {
        if(p->data < q->data)
        {
            last->next = p;
            last = p;
            p=p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last  = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p != NULL)
    last->next=p;
    if(q != NULL)
    last->next=q;
}


int main(){

    int A[] = {3,5,7,10,55,66};
    int B[] = {20,30,40,50,60};

    create(A, 6);
    create2(B,5);

    cout<<"\nFirst: ";
    display(first);

    cout<<"\n\nSecond: ";
    display(second);

    cout<<"\n\nOn Merging: ";
    merge(first, second);
    display(third);


    return 0;
}
