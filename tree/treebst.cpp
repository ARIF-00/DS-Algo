#include <iostream>
#include <queue>
using namespace std;
 

struct Node {
    int data;
    Node* left;
    Node* right;
};
 

 
Node* CreateNode(int data)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 

 
Node* InsertNode(Node* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) 
	{
        root = CreateNode(data);
        return root;
    }
    else if(data<=root->data) 
    {
    	root->left=InsertNode(root->left,data);
    }
    else
	{
		root->right=InsertNode(root->right,data);
    }
    return root;
}
 
