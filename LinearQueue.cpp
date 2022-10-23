#include <iostream>
using namespace std;
#define size 5
int LinearQueue[size];
int front = -1;
int rear = -1;

bool isempty(){
    if(front == -1 && rear == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue(int value){
    if(isempty()){
        front = 0;
        rear = 0;
        LinearQueue[rear] = value;
    }else if(rear >= size-1){
        cout<<"Queue Overflow!"<<endl;
    }else{
        rear++;
        LinearQueue[rear] = value;
    }
}

void dequeue(){
    if(isempty()){
        cout<<"Queue UnderFlow!"<<endl;
    }else if(front == size-1){
        front = -1;
        rear = -1;
    }else{
        front++;
    }
}

void showFront(){
    if(isempty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<LinearQueue[front]<<endl;
    }
}

void displayLinearQueue(){
    if(isempty()){
        cout<<"LinearQueue is empty."<<endl;
    }else{
        for(int i=front; i<=rear; i++){
                cout<<LinearQueue[i]<<endl;
            }
    }
  
}

int main(){
    enqueue(1);
    enqueue(2);
//    enqueue(3);
//    enqueue(4);
    enqueue(5);
    displayLinearQueue();
    showFront();
    dequeue();
    showFront();
    dequeue();
    showFront();
    dequeue();
    dequeue();
    return 0;
}
