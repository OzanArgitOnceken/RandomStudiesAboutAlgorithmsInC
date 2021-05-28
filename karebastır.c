#include<stdio.h>
#include<stdlib.h>

int main()
{
	int giris;
	pr("Boyu ne kadar olsun ?");
	sc("%d",&giris);
	int i,j;
	for(i=0;i<giris;i++)
	{
		for(j=0;j<giris;j++)
		{
			if(i==0)
				pr("* ");
			else if(i==giris-1)
				pr("* ");
			else if(j==0||j==giris-1)
				pr("* ");
			else
				pr("  ");	
		}
	pr("\n");
	}
}

