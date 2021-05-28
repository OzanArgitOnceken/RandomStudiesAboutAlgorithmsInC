#include<stdio.h>
#include<stdlib.h>
int* addaray(int *myar);//adds 5 all elements
int main()
{
	int i=0;
	int aray[]={12,32,4,124,6};
	int *x=addaray(aray);
	for(i=0;i<5;i++)
	{
		pr("%d   ,",x[i]);
	}
}

int* addaray(int *myar)
{
	int i;
	for(i=0;i<5;i++)
	{
		myar[i]+=5;
	}
	return myar;
}

