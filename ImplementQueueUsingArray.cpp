#include<iostream>
using namespace std;
class Queue{
    private:
    static const int SIZE = 5;
    int front,rear;
    int arr[SIZE];
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    // enqueue operation Queue
    bool isFull(){
        return(rear==SIZE-1)?true:false;
    }
    bool isEmpty(){
        return(front==-1&&rear==-1)?true:false;
    }
    int peek(){
        int x=arr[rear];
        return x;
    }
    void enqueue(){
        int data;
        if(isFull()){
            cout<<"\nOverflow Condition!!"<<endl;
        }
        else{
            if(front==-1){
                front = 0;
            }
            cout<<"Enter the element to be added"<<endl;
            cin>>data;
            rear++;
            arr[rear]=data;
            cout<<"\nElement: "<<arr[rear]<<" Added."<<endl<<endl;
        }
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"\nUnderflow Condition!!"<<endl;
        }
        else if(front==rear){
                front=-1;  
                rear =-1;   //reset to empty condition;
            }
        else{
            int element = arr[front];
            front++;
            cout<<"\nElement: "<<element<<" Deleted."<<endl<<endl;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"\nQueue is Empty!!"<<endl;
        }
        else{
            cout<<"\n";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Queue q;
    int choice;
    while(1){
        cout<<"Perform Queue Operation"<<endl;
        cout<<"1.enqueue\n2.dequeue\n3.check peek in queue\n4.display\n5.exit"<<endl<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            q.enqueue();
            break;
            case 2:
            q.dequeue();
            break;
            case 3:
            cout<<"\nPeek element in Queue is "<<q.peek()<<endl;
            break;
            case 4:
            q.display();
            break;
            case 5:
            exit(0);
            default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}