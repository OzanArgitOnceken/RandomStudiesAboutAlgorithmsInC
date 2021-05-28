#include<stdio.h>
#include<stdlib.h>
typedef struct binarytree tre;
struct binarytree{
	tre *left;
	int boy;
	tre *right;
};
tre *start=NULL;
tre *temp=NULL;
void filltre(int );
void goway(tre );

int main()
{
	int cho=1;
	while(cho)
	{
		pr("Enter number:\n");
		sc("%d",&cho);
		filltre(cho);
	}
}
void filltre(int x)
{
	tre *eklenecek=(tre *)malloc(sizeof(tre));
	eklenecek->boy=x;
	eklenecek->left=NULL;
	eklenecek->right=NULL;
	if(start==NULL)
	{
		start=eklenecek;
	}
	else
	{
		goway(eklenecek);
	}
	
}
void goway(tre eklenecek)
{
	temp=start;
	while((temp->left!=NULL)&&(temp->right!=NULL))
	{
		if((eklenecek->boy)>(temp->boy))
		{
			temp=temp->right;
		}
		else
		{
			temp=temp->left;
		}
	}
	eklenecek=temp;
}
