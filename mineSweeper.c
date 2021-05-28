#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

int aynisimi(int,int,int holder[][2]);
void doldur(int dizi[][2] );
int main ()
{
	int x,y;
	x=10;
	y=10;
	int mine_holder[x][y];
	int i,j;
	int holder[24][2];
	doldur(mine_holder);
	
	for(i=0;i<24;i++)
	{
		int holdtester=0;
		j=0;
		x=rand()%10+1;
		y=rand()%10+1;
		holdtester=aynisimi(x,y,holder);
		
		if(holdtester)
		{
			mine_holder[i][j]=x;
			j++;
			mine_holder[i][j]=y;
		}
		else
		{
		int holdtester=0;
		j=0;
		x=rand()%10+1;
		y=rand()%10+1;
		holdtester=aynisimi(x,y,holder);
		if(holdtester)
		{
			mine_holder[i][j]=x;
			j++;
			mine_holder[i][j]=y;
		}
			
		}
				
	}
	
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			pr("%d ",mine_holder[i][j]);
		}
		pr("\n");
	}
	
 return 0;
}
void doldur(int dizi[][2] )
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			dizi[i][j]=0;
	}
}

int aynisimi(int x,int y,int holder[][2])
{
	int i,tester=0;
	for(i=0;i<24;i++)
	{
		if(x==holder[0][0]&&y==holder[0][1])
		tester++;
	}
	return tester;
}
