#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int data){
        Node* new_node = new Node(data);
        if(front==NULL){
            front=new_node;
            rear=new_node;
        }
        else{
        rear->next=new_node;
        rear=new_node;
        }
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is Empty!!"<<endl;
        }
        else{
            Node* temp =front;
            front=front->next;
            free(temp);
        }
    }
    void display(){
        if(front==NULL){
            cout<<"Queue is empty!!"<<endl;
        }
        else{
            Node* temp=front;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
}