#include<stdio.h>
#include<stdlib.h>

int main()
{
	int str[]={12,3,54,53,97,900,1,7,8,430};
	int i,j,key;
	for(i=1;i<9;i++)
	{
		j=i-1;
		key=str[i];
		while(j>=0&&str[j]>key)
		{
			str[j+1]=str[j];
			j--;
		}
		str[j+1]=key;
	}
	for(i=0;i<9;i++)
	{
		pr("%d	,",str[i]);
	}
}

