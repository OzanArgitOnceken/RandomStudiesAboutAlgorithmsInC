#include<stdio.h>
#include<stdlib.h>
typedef struct link li;
struct link{
	int number;
	li *next;
};
li *start=NULL;
li *temp=NULL;
void addlist(int );
void printlist();
void addbw(int ,int );//add between
int main()
{
	int cho=1;
	while(cho)
	{
		pr("Enter a Number:(if u wanna add araya press 7 haci)\n");
		sc("%d",&cho);
		if(cho==7)
		{
			int which;
			pr("hangi sayidan sonra?\n");
			sc("%d",&which);
			pr("Hangi sayiyi?");
			sc("%d",&cho);
			addbw(which,cho);
		}
		addlist(cho);
		printlist();
	}
}
void addlist(int x)
{
	li *eklenecek=malloc(sizeof(li));
	eklenecek->number=x;
	eklenecek->next=NULL;
	if(start==NULL)
	{
		start=eklenecek;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=eklenecek;
	}
}
void printlist()
{
	temp=start;
	while(temp->next!=NULL)
	{
		pr("%d=>  ",temp->number);
		temp=temp->next;
	}
	pr("%d\n",temp->number);
}
void addbw(int whi,int x)
{
	li *eklenecek=malloc(sizeof(li));
	eklenecek->number=x;
	temp=start;
	while(temp->number!=whi)
	{
		temp=temp->next;
	}
	int *yertut;
	yertut=temp->next;
	temp->next=eklenecek;
	eklenecek->next=yertut;
	
}
