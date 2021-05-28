#include<stdio.h>
#include<stdlib.h>
void tester(char test[])
{
	int i=0;
	for(;i<5;i++)
	{
		test[i]='d';
	}
}
int main()
{
	char test[12];
	tester(&test[0]);
	int i=0;
	for(;i<9;i++)
	{
		pr("%c",test[i]);
	}
}

