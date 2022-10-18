#include<iostream>

using namespace std;
class Queue {
    int rear;
    int front;
    int size;
    int *arr;
    Queue(int s){
        front = rear= -1;
        size =s;
        arr= new int[s];
    }
    
    void enQueue(int value){
    if((front==0 && rear==size-1)|| (rear== (front-1)%(size-1))){
        cout<<"Queue is Full"<<endl;
        return;
    }
    else if (front == -1){
        front = rear=0;
        arr[rear]=value;
    }
    else if(rear=size-1 && front !=0){
        rear=0;
        arr[rear]=value;
    }
    else {
        rear++;
        arr[rear]=value;
    }
    }
    void deQueue(int value){
        if(front ==-1 && rear ==-1){
            cout<<"Queue is Empty"<<endl;
        }
        if(front==rear ){
            front =-1;
            rear=-1;
        }
        else if(front==size-1)
        front=0;
        else 
        front++;
    }

};
int main() {
    
    return 0; 
}