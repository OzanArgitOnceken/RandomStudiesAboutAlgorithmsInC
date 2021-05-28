#include <stdio.h>
#include <math.h>
#include"ozycript.h"
typedef struct linked{
	int data;
	struct node* next;
}node;
node *head=NULL;
void adit(int);
int main(void)
{
	int numb;
	do{
		pr("Enter a numb:\n");
		sc("%d",&numb);
		adit(numb);
	}while(numb>0);
}
void adit(int a)
{
	node* yeni=(node*)malloc(sizeof(node));
	if(head==NULL)
	{
	}
}
