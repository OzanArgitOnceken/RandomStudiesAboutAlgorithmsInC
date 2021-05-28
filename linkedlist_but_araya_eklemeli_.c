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
void arayaekle(int , int);
void yazdir();
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
	pr("hangi sayidan sonra eklemek istersin cnm:\n");
	sc("%d",&x);
	pr("ne eklicen cnm:\n");
	sc("%d",&y);
	arayaekle(x,y);
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
void arayaekle(int x, int y)
{
	num *ara=(num*)malloc(sizeof(num));
	ara->data=y;
	q=start;
	while(q->data!=x)
	{
		q=q->ptr;
	}
	num*temp=(num*)malloc(sizeof(num));
	temp=q->ptr;
	q->ptr=ara;
	ara->ptr=temp;
}
