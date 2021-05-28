#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,sayi,j,k,l;
	pr("Which number?");
	sc("%d",&sayi);
	for(i;i<sayi;i++)
	{
		l=0;
		for(j=2;j<i;j++)
		{
			k=j*j;
			int test=i%k;
			if(test==0)
			{
				l++;
			}
		}
		if(l)
		{
			pr("%d is not squarefree\n",i);
		}
		else
		{
			pr("%d is squarefree\n",i);
		}
	}
}

