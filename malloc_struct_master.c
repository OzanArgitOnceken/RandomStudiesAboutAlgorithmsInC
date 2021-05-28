#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int point;
	
};

void ort(int* add,int now);

int main(void)
{
	int count,i;
	pr("Enter how many student?");
	sc("%d",&count);
	struct student *ptr;
	ptr=malloc(count*sizeof(ptr));
	int top=0;
	int * tptr;
	tptr=&top;
	for(i=0;i<count;i++)
	{
		pr("Name:");
		sc("%s",ptr[i].name);
		pr("Point:");
		sc("%d",&ptr[i].point);
		ort(tptr,ptr[i].point);
	}
	pr("\n\n\n");
	for(i=0;i<count;i++)
	{
		pr("Name:%s			Point:%d\n",ptr[i].name,ptr[i].point);
	}
	pr("Ortalama:%d",top/count);
	
	
	free(ptr);
	
	return 0;
}



void ort(int* add,int now)
{
	*add+=now;
}
