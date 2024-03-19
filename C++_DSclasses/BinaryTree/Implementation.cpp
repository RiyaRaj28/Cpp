#include <bits/stdc++.h>  
using namespace std; 
#include <iostream>

struct node 
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL; 
    }

};

vector <int> Preorder(node *root)
{
    if(root!=NULL)
    {
        cout << root->data << endl; 
        Preorder(root -> left);
        Preorder(root -> right);
    }
}



int main()
{
    node *root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3); 

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7); 

    Preorder(root); 
    return 0; 

}