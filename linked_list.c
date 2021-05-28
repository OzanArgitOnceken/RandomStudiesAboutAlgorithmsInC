#include<stdio.h>
#include<stdlib.h>
#include"ozycript.h"
struct linked{
	int data;
	struct linked* next;
};
typedef struct linked link;
void printlist(link* head)
{
	link* temp=head;
	while(temp!=NULL)
	{
		pr("%d->",temp->data);
		temp=temp->next;
	}
	pr("\n");
}
link *create(int x)
{
	link* list=malloc(sizeof(link));
	list->data=x;
	list->next=NULL;
	return list;
}
link* insert(link *head,link* insertin)
{
	insertin->next=head;
	return insertin;
}
int main()
{
	link* head=NULL;
	link* tmp;
	
	int data;
	int i=0;
	for(;i<25;i++)
	{
		//tmp=;
		head=insert(head,create(i));
		/*
		tmp->next=head;
		head=tmp;
		*/
	}
		printlist(head);
}
