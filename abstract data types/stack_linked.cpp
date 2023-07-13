#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    Node *next=NULL;
    int value;
    Node(int data){
        value=data;
    }
};


class Stack{
    Node *top;
public:
    Stack(){
        Node *top;
    }

    void push(int data){
        if(top==NULL){
            top=new Node(data);
            return;
        }
        Node *temp=new Node(data);
        temp->next=top;
        top=temp;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack is empty."<<endl;
            return ;
        }
        top=top->next;
    }
    void peek(){
        cout<<"Top value is: "<<top->value<<endl;
    }

    void print(){
        Node* current=top;
        cout<<"Stack is : ";
        while(current!=NULL){
            cout<<current->value<<" ";
            current=current->next;
        }
        cout<<endl;
    }

};

void option(){
    cout<<"To insert a value : Enter 1\nTo delete: Enter 2\nTO peek :Enter 3"
          "\nTo print: Enter 4\nTo exit: Enter 5"<<endl;
}

int main(){
    //==================================================================================================================
    Stack stackArray;
    int input=0,number;
    while(input!=5){
        option();
        //cout<<"============================================================================================================="<<endl;
        cout<<"Enter the option: ";
        cout<<endl;
        cin>>input;
        switch (input) {
            case 1:{
                cout<<"Enter the number :"<<endl;
                cin>>number;
                stackArray.push(number);
                break;
            }
            case 2:{
                stackArray.pop();
                break;
            }
            case 3:{
                stackArray.peek();
            }
            case 4:{
                stackArray.print();
                cout<<endl;
                break;
            }

        }

        cout<<"========================================================================================================="<<endl;
    }
    //==================================================================================================================



    return 0;
}
