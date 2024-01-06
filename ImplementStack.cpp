#include<iostream>
using namespace std;
class Stack{
    private:
        static const int SIZE = 5;
        int arr[SIZE];
        int top;
    public:
        Stack(){
            top = -1;
        }
        // Perform isFull operaion
        bool isFull(){
            if(top==SIZE-1){
                return true;
            }
            else{
                return false;
            }
        }
        // Perform isEmpty operation
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        // Perform peek operation
        int peek(){
            if(top==-1){
                return 0;
            }
            else{
                int element = arr[top];
                return element;
            }
        }
        // Perform push operation
        void push(){
            int data;
            if(isFull()){
                cout<<"Stack is Full!!"<<endl;
            }
            else{
                cout<<"Enter data:"<<endl;
                cin>>data; 
                top++;
                arr[top]=data;
                cout<<"Element :"<<arr[top]<<" Added."<<endl<<endl;
            }
        }
        // Perform pop operation
        int pop(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return -1;
            }
            else{
                int element = arr[top];
                top--;
                cout<<"Element :"<<element<<" Deleted."<<endl<<endl;
                return element;
            }
        }
        void display(){
            if(isEmpty()){
                cout<<"Stack is Empty!! Please push data"<<endl;
            }
            else{
                cout<<"\nElement in stack are:"<<endl;
                for(int i=top;i>=0;--i){
                    cout<<arr[i]<<endl;
                }
                cout<<endl;
            }
        }
};
int main(){
    Stack s;
    int choice;
    while(1){
        cout<<"Perform Stack Operation"<<endl;
        cout<<"1.push\n2.pop\n3.check peek\n4.display stack status\n5.exit"<<endl<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout<<"\nThe peek element in stack is:"<<s.peek()<<endl<<endl;
                break;
            case 4:
                s.display();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Worng choice"<<endl;
        }
    }
    return 0;
}