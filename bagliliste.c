#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
struct	node
{
	int data;
	struct node *sonraki;
	
};
int main ()
{
	struct node* ilkdugum=NULL;
	
	ilkdugum=(struct node *)malloc(sizeof(struct node));
	struct node* ikincidugum=(struct node*)malloc(sizeof(struct node));
 	
	ilkdugum->data=15;
 	ilkdugum->sonraki=NULL;
 	ikincidugum->data=20;
 	ikincidugum->sonraki=NULL;
 	
 	
 	pr("%d -> %d\n",ilkdugum->data,ikincidugum->data);
 	pr("%d -> %d\n",ilkdugum->sonraki,ikincidugum->sonraki);
 	pr("%d ->%d",ilkdugum->sonraki,&ilkdugum->data);
	 
	return 0;
}

