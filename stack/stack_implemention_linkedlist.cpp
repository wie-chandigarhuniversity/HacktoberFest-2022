#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
class stack
{
    node *top;
    public:
        stack()
        {
            top==NULL;
        }
        void push(int);
        void pop();
        void display();
        ~stack();
    
};
void stack::push(int num)
{   
    node *temp=new node;
    if(temp==NULL)
        cout<<"Memory error"<<endl;
    else
    {
        temp->data=num;
        temp->link=top;
        top=temp;
    }
}
void stack ::pop()
{
    if (top==NULL)
        cout<<"stack is empty"<<endl;
    else
    {
        node *temp=top;
        top=top->link;
        cout<<"deleted element = "<<temp->data<<endl;
        delete temp;
    }
}
void stack::display()
{   
    node *temp=top;
    if(top==NULL)
        cout<<"stack is empty";
    else
    {
        while(temp->link!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }
}
stack::~stack()
{
    node *temp;
    while(top!=NULL)
    {
        temp=top;
        top=top->link;
        delete temp;
    }
}
// implemented using some examples you can change the main code accordingly
int main()
{
    stack s;
    // s.pop();
    s.push(10);
    s.push(100);
    s.push(1000);
    s.push(10000);
    s.push(20000);
    s.push(2000);
    s.push(200);
    s.push(20);
    s.display();
    s.pop();
        s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    
    s.display();
}