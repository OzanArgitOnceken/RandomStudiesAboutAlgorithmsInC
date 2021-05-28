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
void elemansil(int );
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
	pr("hangi sayiyi istersin cnm:\n");
	sc("%d",&x);
	elemansil(x);
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
void elemansil(int x)
{
	num* iter=(num*)malloc(sizeof(num));
	num* jumper=(num*)malloc(sizeof(num));
	iter=start;
	while(iter->ptr->data!=x)
	{
		iter=iter->ptr;
	}
	jumper=iter->ptr->ptr;
	free(iter->ptr);
	iter->ptr=jumper;
	
}
