         // Insert data at start using iterative method


// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node*next;

//     Node(int value){
//         data=value;
//         next=nullptr;
//     }
// };

// int main(){

//     Node*Head;
//     Head = nullptr;

//     int arr[] = {2,4,6,8,10};

//     for (int  i = 0; i < 5; i++)
//     {
//           if(Head==nullptr){
//             Head = new Node(arr[i]);
//           }

//           else
//           {
//             Node*temp;
//             temp =new Node(arr[i]);
//             temp->next=Head;
//             Head = temp;
//           }
          
//     }

//     Node*temp = Head;
//     while (temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
    
    
//     return 0;
// }


         // insert node at the end of the linked list  ---method I

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = nullptr;
  }
};

int main(){

  int arr[] = {1,2,3,4,5};

    Node*Head;

    for (int i = 0; i < 4; i++)
    {
         if(Head ==nullptr){
           Head = new Node(arr[i]);
         }

         else
         {
          Node* tail = Head;

         while (tail->next != nullptr){
            tail = tail->next;
          }

          Node*temp;
          temp = new Node(arr[i]);
          tail->next = temp;
         }
    }

        Node*temp = Head;
        while (temp != nullptr){
          cout<<temp->data<<" ";
          temp = temp->next;
        }

  return 0;
}