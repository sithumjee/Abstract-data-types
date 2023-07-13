#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data= value;
        next=NULL;
    }
};

class LinkedList{
    Node *head;
public:
    void insert_end(int data){
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

    void insert_front(int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }

    void deleteList(int value){
        Node* temp=head;
        if (head->data==value){
            head=head->next;
            return;
        }
        while(temp!=NULL){
            if(temp->next->data==value){
                temp->next=temp->next->next;
                return;
            }
            temp=temp->next;
        }
    }

    void print(){
       Node* current=head;
       cout<<"Linked list is : ";
       while(current!=NULL){
           cout<<current->data<<" ";
           current=current->next;
       }
       cout<<endl;
    }

    void Search(int value){
        if(head==NULL){
            cout<<"Not found"<<endl;
            return;
        }
        else{
            Node *current=head;
            while(current!=NULL){
                if(current->data==value){
                    cout<<"Found"<<endl;
                    return;
                }
                else{
                    current=current->next;
                }
            }
            cout<<"Not found"<<endl;
        }
    }
};
void option(){
    cout<<"To insert a value at end: Enter 1\nTo insert a value at front: Enter 2\nTo delete: Enter 3"
          "\nTo print: Enter 4\nTo exit: Enter 5"<<endl;
}

int main(){
    LinkedList linkedList;
    int input=0,number;
    while(input!=5){
        option();
        //cout<<"============================================================================================================="<<endl;
        cout<<"Enter the option: ";
        cin>>input;
        switch (input) {
            case 1:{
                cout<<"Enter the number :"<<endl;
                cin>>number;
                linkedList.insert_end(number);
                break;
            }
            case 2:{
                cout<<"Enter the number :"<<endl;
                cin>>number;
                linkedList.insert_front(number);
                break;
            }
            case 3:{
                cout<<"Enter the number :"<<endl;
                cin>>number;
                linkedList.deleteList(number);
                break;
            }
            case 4:{
                linkedList.print();
                cout<<endl;
                break;
            }

        }

        cout<<"========================================================================================================="<<endl;
    }


    return 0;
}