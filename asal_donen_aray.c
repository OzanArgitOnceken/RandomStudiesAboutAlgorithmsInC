#include<stdio.h>
#include<stdlib.h>
int * asalaray(int *);
int main()
{
	
	int i=0;
	int aray[]={12,32,4,124,7,11};
	int *asaltutan=asalaray(aray);
	for(i;i<4;i++)
	{
		pr("%d	,",asaltutan[i]);
	}
	
}

int * asalaray(int *aray)
{
	int i,k=0,m=0,j;
	int secar[99];
	for(i=0;i<6;i++)
	{
		for(j=2;j<aray[i];j++)
		{
			if(aray[i]%j==0)
			{
				k++;
			}
		}
			if(k==0)
		{
			secar[m]=aray[i];
			m++;
			pr("%d\n",secar[i]);
		}
		k=0;
	}
	for(i=0;i<4;i++)
	{
		aray[i]=secar[i];
	}
	return secar;
}
