#include<stdio.h>
#include<stdlib.h>

int main()
{
	int as[5];
	int i=0;
	for(i;i<5;i++)
	{
		as[i]=rand()%10;
		pr("%d	,",as[i]);
	}
}

