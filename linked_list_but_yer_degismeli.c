#include<stdio.h>
#include<stdlib.h>
typedef struct number num;
struct number{
	int data;
	num *ptr;
};
num *start=NULL;
num *temp=NULL;
num *q=NULL;
void sonaekle(int );
void yazdir();
void degis(int ,int );
int main()
{
	int cho=1;
	int x,y;
	while(cho)
	{
		pr("Please enter a data:\n");
		sc("%d",&cho);
		sonaekle(cho);
		yazdir();
	}
	pr("hangi sayiyi degismek istersin cnm:\n");
	sc("%d",&x);
	pr("hangisiyle");
	sc("%d",&y);
	degis(x,y);
	yazdir();
}
void sonaekle(int x)
{
	num *eklenecek=malloc(sizeof(num));
	eklenecek->data=x;
	eklenecek->ptr=NULL;
	if(start==NULL)
	{
		start=eklenecek;
	}
	else
	{
		q=start;
		while(q->ptr!=NULL)
		{
			q=q->ptr;
		}
		q->ptr=eklenecek;
	}
}
void yazdir()
{
	q=start;
	int x,y; 	
	while(q->ptr!=NULL)
	{
		pr("%d=>",q->data);
		q=q->ptr;
	}
	pr("%d\n ",q->data);
	
}
void degis(int x,int y)
{
	num* temp=(num*)malloc(sizeof(num));
	temp=start;
	while(temp->ptr->data!=x)
	{
		temp=temp->ptr;
	}
//	pr("%d\n\n",temp->data);
	temp->ptr->data=y;
	
//	pr("%d\n\n",temp->data);
	temp=start;
	while(temp->ptr->data!=y)
	{
		temp=temp->ptr;
	}
//	pr("%d\n\n",temp->data);
	temp->ptr->data=x;
//	pr("%d\n\n",temp->data);
	free(temp);
}
