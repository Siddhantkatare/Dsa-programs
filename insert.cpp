     // Static way of creating node

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
//         next = nullptr;
//     }
// };

// int main(){
    
//     Node A1(4);
//     return 0;
// }



            // Dynamic way of creating node


//  #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = nullptr;
//     }
// };

// int main(){
//     Node * Head;
//     Head = new Node(4);

//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
// }



                // Insert the node at the beginning

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
//         next = nullptr;
//     }
// };

// int main(){
//     Node * Head;
//     Head=nullptr;

//     int arr[] = {2,4,6,8,10};

//     for (int i = 0; i < 5; i++)
//     {
       
//     //linked list doesn't exist
//        if(Head==nullptr){
//         Head = new Node(arr[i]);
//         }

//    // linked list exist
//         else
//        {
//         Node * temp;
//         temp = new Node(arr[i]);
//         temp->next=Head;
//         Head=temp;
//        }
//     }

//             //print the value or traverse the linked list

//        Node*temp = Head;

//        while(temp!=nullptr) {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//        }
    
//     return 0;
// }


            //insert the value at the end 


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
//         next = nullptr;
//     }
// };

// int main(){
//     Node*Head;
//     Head=nullptr;

//     int arr[]={2,4,6,8};

//     for (int i = 0; i <4 ; i++)
//     {
//           if (Head==nullptr)
//           {
//              Head = new Node(arr[i]);
//           }

//           else
//           {
//             Node*temp;
//             temp=Head;

//             while(temp->next!=nullptr){
//                 temp=temp->next;
//             }

//             Node*tail;
//             tail=new Node(arr[i]);
//             temp->next=tail;
//           }
          
//     }
//         // printing array after converting in linked list or adding the element at the lasst of linked list
//        Node*temp = Head;

//        while(temp!=nullptr) {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//        }
    
// }



                // Insert data at the end using recursion 


