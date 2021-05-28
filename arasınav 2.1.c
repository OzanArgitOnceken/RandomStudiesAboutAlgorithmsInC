/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define pr printf
#define sc scanf
int main ()
{	int k,y,j=0,i,c=0,p;
	pr("Motifli ucgen siparis:\n");
	char yuksek[9999];
	sc("%s",yuksek);
	pr("%s\n",yuksek);
	y=(int)strlen(yuksek);
	for(i=1;i<=y;i++)
	{	
		for(k=0;k<y-i;k++)
			{ 
				pr(" ");
			}
		for(j=0;j<i;j++)
			{
			if(i==y)
			{	
				for(p=0;i<y;i++)
					pr("%c ",yuksek[i]);
			}
			else if(j==0)
			{
				pr("%c ",yuksek[c]);	
			}
			else if(j==i-1)
			{
				pr("%c ",yuksek[j]);
			}
			else
			pr("  ");
			}
		if(i!=y-1)
		pr("\n");
		c++;
	}
	for(i=0;i<y;i++)
		pr("%c ",yuksek[i]);
	return 0;
}


*/














#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define pr printf
#define sc scanf
int main ()
{	int k,y,j=0,i,c,p;
	pr("Motifli ucgen siparis:\n");
	char yuksek[9999];
	pr("kelime giriniz:  ");
	sc("%[^\n]s",yuksek);
	pr("satir sayisi giriniz:  ");
	sc("%d",&y);
	c=(int)y-1;
	for(i=1;i<=y;i++)
	{	
		for(k=0;k<y-i;k++)
			{ 
				pr(" ");
			}
		for(j=0;j<i;j++)
			{
			if(i==y)
			{	
				for(p=0;i<y;i++)
					pr("%c ",yuksek[i]);
			}
			else if(j==0)
			{
				pr("%c ",yuksek[c]);	
			}
			else if(j==i-1)
			{
				pr("%c ",yuksek[j]);
			}
			else
			pr("  ");
			}
		if(i!=y-1)
		pr("\n");
		c--;
	}
	for(i=0;i<y;i++)
		pr("%c ",yuksek[i]);
	return 0;
}


