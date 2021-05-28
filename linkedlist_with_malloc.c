#include<stdio.h>
#include <stdlib.h>
struct node{
	int value;
	struct node* next;
	
};
	typedef struct node node_t;
	void printlist(node_t *head);
	node_t *create(int value);
int main()
{
	node_t *tmp;
	node_t *head;
	//link them up
	tmp=create(8);
	head=tmp;
	tmp=create(12);
	tmp->next=head;
	head=tmp;
	tmp=create(13);
	tmp->next=head;
	head=tmp;
	
	printlist(head);
	return 0;
}
	void printlist(node_t *head)
	{
		node_t *temporary=head;
		while (temporary!=NULL)
		{
			printf("%d  ,",temporary->value);
			temporary= temporary->next;	
		}
		printf("\n");
	}
	node_t *create(int value)
	{
		node_t *result=malloc(sizeof(node_t));
		result->value;
		result->next=NULL;
		return result;
	}
