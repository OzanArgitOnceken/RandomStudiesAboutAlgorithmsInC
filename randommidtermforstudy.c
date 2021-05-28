#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j,k,test=0;
	while(i<10)
	{
		j=0;
		while(j<10)
		{
			k=0;
			while(k<10)
			{
				if(i!=j&&k!=i&&k!=j)
				{
					test++;
				}
			k++;
			}
			j++;
		}
		i++;
	}
	pr("%d tane sayi var",test);
}

