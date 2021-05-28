#include<stdio.h>
struct node{
	int value;
	struct node* next;
	
};
	typedef struct node node_t;
	void printlist(node_t *head);
int main()
{
	node_t n1,n2,n3;
	node_t *head;
	n1.value=45;
	n2.value=3;
	n3.value=89;
	//link them up
	head= &n1;
	n3.next=NULL;
	n2.next=&n3;
	n1.next=&n2;
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
