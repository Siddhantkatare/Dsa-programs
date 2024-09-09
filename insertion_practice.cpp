// #include<iostream>
// using namespace std;

// class Node
// {
//     public:

//     int data;
//      Node *next;

//     Node(int value){
//         data= value;
//         next = nullptr;
//     }
// };

// int main(){

//     int arr[] = { 2,4,6,8,10};

//     Node *Head;
//     Head =nullptr;

//    for (int  i = 0; i < 5; i++)
//    {
//         if(Head==nullptr)
//         {
//              Head= new Node(arr[i]);
//         }

//         else
//         {
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//    }

//      // For printing the linkedlist

//      Node *temp;
//      temp = Head;

//      while(temp!= nullptr){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//      }

//     return 0;
// }



            // Insert the data at the end of the Linkedlsist

// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next= next;
//     }
// };

// int main(){
   

//     Node *Head;
//     Head= nullptr;
//     cout<<"I am outside for loop";

//     int arr[] = {2,4,6,8,10};

//     for (int i = 0; i <5; i++)
//     {
//             Node *tail;
//             tail =Head;

//             //if linked list is not created
//             if (Head== nullptr)
//             {
//                 Head = new Node(arr[i]);
//                 cout<<"first node is created and value is "<<arr[i];
//             }
            
//             else
//             {
//             // if the linked lIst is already created

//             while(tail->next != nullptr)
//             {
//                 tail = tail->next;
//             }

//                 Node *temp;
//                 temp = new Node(arr[i]);
//                 tail->next = temp;
//             }
            
//     }

//       // Printing the Linked List

//       Node *temp;
//       temp = Head;

//       while(temp!= nullptr)
//       {
//         cout << temp->data << " ";
//         temp = temp->next;
//       }
    
//     return 0;
// }



                    // Insert data at the end of the linked list using recursion

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }

};

Node* CreateLinkedList(int arr[], int index,  int size){

    if(index == size)
    return nullptr;

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;

}
  



int main(){

    Node* Head;
    Head = nullptr;
    
    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr, 0 ,5);

    //

    Node* tail;
    tail = Head;

    while(tail){
        cout<<tail->data<<" ";
        tail = tail-> next;
    }

    return 0;
}