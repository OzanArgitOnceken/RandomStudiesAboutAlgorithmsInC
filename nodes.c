#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node
{
	int data;
	node *next;
};
node * createlist(int n);
void displaylist(node* head);
int main()
{
	int n=0;
	node *head=NULL;
	pr("How many nodes?");
	sc("%d",&n);
	head=createlist(n);
	displaylist(head);
	return 0;
}
node * createlist(int n)
{
	int i;
	node* head=NULL;
	node* temp=NULL;
	node* p=NULL;
	for(i=0;i<n;i++)
	{
		
		temp=(node*)malloc(sizeof(node));
		pr("\nEnter for data %d:",i+1);
		sc("%d",&(temp->data));
		temp->next=NULL;
		
		
		if(head=NULL)
		{
			head=temp;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
				{
					p=p->next;
				}
				//mesela bak adresler þöyle olsun:
				//16->20->24->NULL
				//p en son 24 ü alýcak aþaðýda da temp ten sonra NULL geldiði için sýkýntý yok ;)
				//temp in ki diyelim 32->NULL ya
				//16->20->24->32->NULL a dönüþüyo.
			p->next=temp;
		}
	}
return head;
}
void displaylist(node* head)
{
	node* p=head;
	while(p->next!=NULL)
	{
		pr("\n%d\n",p->data);
	}
}
