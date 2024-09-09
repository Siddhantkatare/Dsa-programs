     // Deleting the data or deleting the Node from beggining 


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* CreateLinkedList(int arr[], int index, int size){
    if(index == size)
    {
        return nullptr;
    }

    Node*temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr ,index+1, size );
    return temp;

}

int main(){
    
    Node * Head;
    Head=nullptr;

    int arr[] ={2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);


    Head =CreateLinkedList(arr, 0, size);
    

    if(Head!=nullptr){
        Node*temp = Head;
        Head = temp->next;
        delete temp;
    }

    Node *temp =Head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    return 0;
}