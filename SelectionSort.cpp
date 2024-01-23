#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }   
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,6,3,2,7,9,6,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    display(arr,n);
    return 0;
}