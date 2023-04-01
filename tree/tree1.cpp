#include <bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	struct node* left;
	struct node* right;
	node(int data)
	{
		val = data;
		left = NULL;
		right = NULL;
	}
};

int main()
{
	struct node* root= new node(1);
	root->left= new node(2);
	root->right=new node(3);
	return 0;
}
