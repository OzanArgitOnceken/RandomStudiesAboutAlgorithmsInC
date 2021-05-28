#include<stdio.h>
#include<stdlib.h>
typedef struct binarytree tre;
struct binarytree{
	tre *left;
	int data;
	tre *right;
};
tre *start=NULL;
void filltre(int);
void search(int );
int main()
{
	int cho=1;
	while(cho)
	{
		pr("Enter number:\n");
		sc("%d",&cho);
		filltre(cho);
	}
	pr("What do you wanna search?");
	sc("%d",&cho);
	search(cho);
}
void filltre(int x)
{
	tre* ekle=(tre*)malloc(sizeof(tre));
	ekle->data=x;
	ekle->left=NULL;
	ekle->right=NULL;
	if(start==NULL)
	{
		start=ekle;
	}
	else
	{
		tre* temp=(tre*)malloc(sizeof(tre));
		temp=start;
		while(temp!=NULL)
		{
			if(ekle->data>temp->data)
			{
				temp=temp->right;
			}
			else
			{
				temp=temp->left;
			}
		}
	}
}
void search(int x)
{
	tre* temp=(tre*)malloc(sizeof(tre));
	temp=start;
	while(temp->data!=x)
	{
		if(x>temp->data)
		{
			temp=temp->right;
		}
		else
		{
			temp=temp->left;
		}
	}
	pr("u found data %d",temp->data);
}
