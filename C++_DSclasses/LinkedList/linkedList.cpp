// #include <iostream> 
// using namespace std;

// int main()
// {
//     int a = 4;
//     int *p = &a;
//     int **q = &p;

//     //*q points to the value at the address stored in q 
//     cout<< *q << "\n"; 
//     cout<< &a;


//     return 0;
// }

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


void InsertAtHead(Node* &head, int data)
{
    Node *new_Node = new Node{data, head};  

    if(head==NULL)
    {
        head = new_Node; 
        return; 
    }

}

void InsertAtTail(Node *&head, int data)
{

    if(head==NULL)        //if list is empty, then insert the new node at the head of list 
    {
        head -> data = data; 
        return;
    }
    Node *new_Node = new Node{data, head}; 


    head -> next = new_Node;
    head = new_Node; 

}





int main()
{
    Node *head = new Node{1, head};
    Node *second = new Node{2, second};
    Node *third = new Node{3, third};

    








}