#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            next = NULL;
        }
};
class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = NULL;
        }
        void push(int data){
            Node* new_node = new Node(data);
            new_node->next = top;
            top=new_node;
            cout<<"Element :"<<top->data<<" Added."<<endl;
        }
        void pop(){
            if(top==NULL){
                cout<<"Stack is Empty!!"<<endl;
            }
            else{
                Node* temp = top;
                top=top->next;
                cout<<"Element :"<<temp->data<<" Deleted."<<endl;
                free(temp);
            }
        }
        void display(){
            if(top==NULL){
                cout<<"Stack is Empty!! Please push data"<<endl;
            }
            else{
                Node* temp = top;
                while(temp!=NULL){
                    cout<<temp->data<<endl;
                    temp=temp->next;
                }
            }
        }
};
int main(){
    Stack s;
    s.push(5);
    s.push(6);
    s.display();
    s.pop();
    s.display();
    return 0;
}