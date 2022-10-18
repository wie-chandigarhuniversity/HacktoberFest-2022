/*
This is c program for linked list.
In this program we have created method to add, remove, get and print elements of linked list including method to get size of linked list.
_________________________________________________________________________
-------------------------------------------------------------------------
```````````````````Methods Available For Linked List`````````````````````
1. add elements in linked list
2. remove last element of linked list
3. print all element of linked list
4. get length of linked list
5. get nth element of linked list
-------------------------------------------------------------------------
`````````````````````````````````````````````````````````````````````````
---->>> c program created 
---->>>by Suraj Kiran Airi(507-D)(22bcs11173)
________________________________________________________________________
________________________________________________________________________
*/



#include<stdio.h>
// this is used for memory allocation
#include<stdlib.h>

typedef struct node
{
    int test;
    struct node *next;
} Node;

Node * head;

void print_all_node(Node *head);
void add_node(Node * node, Node **h);
Node *getNthNode(int index, Node *head);
int remove_last_node(Node **head);


int main(){
    printf("\n");
    return 0;
}


// this function will add node on 0th index in linked list
void add_node(Node * node, Node **h){
    node->next = *h;
    *h = node;
}

// this function will remove last element in linked list
// return 1 if successfully removed element 
// return 0 if unable to remove element
int remove_last_node(Node **head){
    // will quit from this function if linked list is already empty
    if(*head == NULL){
        return 0;
    }

    Node *cur = *head;
    // will be executed if only first element exists
    if(cur->next == NULL){
        *head = NULL;
    }
    // this will be executed if length is more than 1
    else{
        
        while(cur != NULL){
        // logic to remove last element 
        if(cur->next->next == NULL){
            printf("delete this node");
            cur->next = NULL;
            return 1;
        }
        cur = cur->next;
    }
    }
    
    return 0;
}

// this will print all nodes in linked list
void print_all_node(Node *head){
    printf("\nPrinting all Nodes:");
    Node *current = head;
    // iterating through linked list
    while(current != NULL){
        // print node based on it's element
        // this is just sample
        printf("\n%d",current->test);
        current = current->next;
    }
}

// return length of linked list
int get_node_length(Node *head){
    int len = 0;
    Node *cur;
    cur = head;
    // iterates through all elements of list
    while(cur != NULL){
        // increment length value
        len++;
        cur = cur->next;
    }
    return len;
}

// return nth element in linked list or NULL
Node *getNthNode(int index, Node *head){
    Node *cur = head;
    int count = 0;
    while (cur != NULL)
    {
        // if count value is equal to index given then return Node
        if(count == index){
            return cur;
        }
        // increment counter
        count ++;
        cur = cur->next;
    }
    // if index is more than length return NULL
    return NULL;
}