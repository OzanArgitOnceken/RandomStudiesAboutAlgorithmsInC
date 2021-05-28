#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i,c,k=0;
	int aray[]={3,5,7,9,12,23};
	//sc("%d",&c);
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
			pr("%d asalmis",aray[i]);
		}
		k=0;
	}
}

