#include<stdio.h>
#include<stdio.h>
struct node{
	int deger;
	struct node * next;
};
typedef struct node dugum;
void printlist(dugum *head);
int main()
{
	printf("%d     \n",sizeof(int)	);
	printf("%d     \n",sizeof(dugum)	);
	dugum *first;
	dugum n1,n2,n3,n4;
	n1.deger=10;
	n2.deger=23;
	n3.deger=45;
	n4.deger=9;
	first=&n1;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	printlist(first);
}
void printlist(dugum *head)
{
	
		while (head!=NULL)
		{
			printf("%d  ,",head->deger);
			head= head->next;	
			printf("%d  ,",head);
		}
		printf("\n");
}
