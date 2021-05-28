#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	pr("Enter a number:");
	sc("%d",&num);
	int i,j,test;
	test=num/3;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(i>=test&&i<test*2)
				pr("+ ");
			else if(j>=test&&j<test*2)
				pr("+ ");
			else
				pr("  ");
		}
	pr("\n");
	}
}

