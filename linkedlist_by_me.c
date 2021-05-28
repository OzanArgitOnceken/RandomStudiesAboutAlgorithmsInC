#include<stdio.h>
#include<stdlib.h>
#include"ozycript.h"
struct linkedlist{
	int data;
	struct linkedlist* next;
};
typedef struct linkedlist node;
node adlist(int data,node *start);
void printlist(node* head);

void main()
{
	node *head=NULL;
	node* temp;
	int data;
	do
	{
		pr("Enter a data\n");
		sc("%d",&data);
		*head=adlist(data,temp);
		
		printlist(head);
	}while(data>0);
	
}
node adlist(int x,node* start)
{
	node *newdata=(node*)malloc(sizeof(node));
	newdata->data=x;
	newdata->next=NULL;
	if(start==NULL)
	{
		start=newdata;
		return *start;
	}
	
	else
	{
		while(start->next!=NULL)
			start=start->next;
		start->next=newdata;
	}
	start=NULL;
}
void printlist(node* start)
{
	while(start->next!=NULL)
	{
		pr("%d->",start->data);
		start=start->next;
	}
	
}
