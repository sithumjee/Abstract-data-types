#include <bits/stdc++.h>
using namespace std;

class stack_array{
    int top;
public:
    int arr[1000];
    int size=1000;
    stack_array(){
        top=-1;
    }
    void push(int value){
        if (top>=size-1){
            cout<<"failed.stack is already filled"<<endl;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Successfully entered the value "<<value<<" to the stack."<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"failed.Stack is already empty."<<endl;
        }
        else{
            cout<<"You removed "<<arr[top]<<endl;
            top--;
            arr[top];
        }
    }
    void display(){
        cout<<endl;
        cout<<"Stack is: ";
        for(int i=top;i>-1;i--){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
};

void option(){
    cout<<"To insert a value : Enter 1\nTo delete: Enter 2"
          "\nTo print: Enter 3\nTo exit: Enter 4"<<endl;
}

int main(){
    //==================================================================================================================
    stack_array stackArray;
    int input=0,number;
    while(input!=4){
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
                stackArray.display();
                cout<<endl;
                break;
            }

        }

        cout<<"========================================================================================================="<<endl;
    }
    //==================================================================================================================



    return 0;
}

