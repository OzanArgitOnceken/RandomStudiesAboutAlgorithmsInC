#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int main ()
{
	int kac,i,j;
	sc("%d",&kac);
	int gir[9999];
	for(i=0;i<kac;i++)
	{
		sc("%d",&gir[i]);
	}
	/*
	for(i=0;i<kac;i++)
	{
	pr("%d ",gir[i]);
	}
	*/
	for(i=1;i<10;i++)
	{
		pr("%d",i);
		for(j=0;j<kac;j++)
		{
			if(gir[j]==i)
			pr("* ");
		}
	pr("\n");
	}

 return 0;
}

