#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class QueueArray{
public:
    vector<int> arr;
    int index=0;
    void push(int data){
        arr.push_back(data);
    }
    void pop(){
        if (index<arr.size()){
            index=index+1;
            cout<<"You popped "<<arr[index-1]<<" ."<<endl;
        }
        else{
            cout<<"out of range"<<endl;
        }
    }
    void print(){
        cout<<"Queue array is: ";
        for(int j=index;j<arr.size();j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}; //queue using arrays.

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data= value;
        next=NULL;
    }
};

class QueueLinkedList {
    Node *head;
public:
    void push(int data){
        if (head==NULL){
            head=new Node(data);
        }
        else{
            Node* current=head;
            while(current->next!=NULL){
                current=current->next;
            }
            current->next=new Node(data);
        }
    }

    int pop(){
        if(head==NULL){ return 0;}
        int value=head->data;
        head=head->next;
        return value;
    }
    void print(){
        Node* current=head;
        cout<<"Queue  is : ";
        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};


int main(){
    QueueArray queueArray;
    queueArray.push(23);
    queueArray.push(65);
    queueArray.push(38);
    queueArray.push(61);
    queueArray.push(97);
    queueArray.print();
    queueArray.pop();
    queueArray.pop();
    queueArray.pop();
    queueArray.pop();
    queueArray.pop();
    queueArray.pop();
    queueArray.pop();
    queueArray.print();

    QueueLinkedList q;
    q.push(12);
    q.push(32);
    q.push(18);
    q.push(18);
    q.push(53);
    q.print();
    q.pop();
    q.pop();
    q.print();
    return 0;
}
