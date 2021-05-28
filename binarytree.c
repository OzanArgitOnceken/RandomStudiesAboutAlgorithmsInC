#include<stdio.h>
#include<stdio.h>
struct BST{
	int data;
	struct BST *left, *right;
	
	
};
typedef struct BST node;
node* createNode(int n);
int search(node* root,int number);
node* insert(node* root,int n);

int main()
{
	int n,number;
		node* root=NULL;
	char ch;
	do
		{
		pr("ENTER:");
		sc("%d",&n);
		root=insert(root,n);
		pr("Do you wanna more?(y/n)")	;
		ch=getche();
		}while(ch=='y'||ch!='n');
		pr("\nEnter a number to search:");
		sc("%d",&number);
		
		if(search(root,number)==1)
		pr("Item found");
		else
		pr("Not found");
}
node* createNode(int n)
{
	node* newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=n;
	newnode->left=newnode->right=NULL;
	return newnode;
}
node* insert(node* root,int n)
{
	if(root==NULL)
		{
			root=createNode(n);
		}
	else if(n<=root->data)
		{
			root->left=insert(root->left,n);
		}
	else
		{
			root->right=insert(root->right,n);
		}
	return root;
}
int search(node* root,int number)
{
	if(root==NULL)
		return 0;
	else if(number==root->data)
		return 1;
	else if(number<=root->data)
		return search(root->left,number);
	else 
		return search(root->right,number);
}
