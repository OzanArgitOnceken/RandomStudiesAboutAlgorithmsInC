#include<stdio.h>
#include<stdlib.h>
//selection sort
int main()
{
	int str[]={12,3,54,53,90,900,1,7,8,430};//9 tane
	int i,smal,yer,j;
	j=0;
	while(j<9)
	{
		
		smal=100000000;
		for(i=j;i<9;i++)
		{
			if(str[i]<=smal)
			{
				smal=str[i];
				yer=i;
			}
		}
		int temp;
		temp=str[yer];
		str[yer]=str[j];
		str[j]=temp;
		j++;
	}
	
	for(i=0;i<9;i++)
	{
		pr("%d	,",str[i]);
	}
	
}

