#include<stdio.h>
#include<stdlib.h>
#include"ozycript.h"
void emptyplat(int[][4]);
void writeArr(int [][4]);
void onerand(int [][4]);
int notful(int [][4]);
void movit(int [][4],char);
void main()
{
   	time_t t;
	srand((unsigned) time(&t));
	int plat[4][4];
	emptyplat(plat);
	onerand(plat);
//	writeArr(plat);
	char way;
	int test=1;
	while(test)
	{
		
		
		onerand(plat);
		writeArr(plat);
		sc(" %c",&way);
		movit(plat,way);
		
		pr("\n");
		pr("\n");
		pr("\n");
	
		pr("\n");
		pr("\n");
		pr("\n");
		pr("\n");
		test=notful(plat);
	
	}
}
void emptyplat(int a[][4])
{
	int i=0,j;
	for(;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[j][i]=0;
		}
	}
}
void writeArr(int arr[][4])
{
	
	pr("-------------\n");
	int i=0,j;
	for(;i<4;i++)
	{
		pr("|");
		for(j=0;j<4;j++)
		{
			if(arr[i][j]==0)
				pr("   ");
			else
				pr("%-2d ",arr[i][j]);
		}
		pr("|");
		pr("\n");
	}
	pr("-------------\n");
}

void onerand(int arr[][4])
{
	int x=rand()%4;
	int y=rand()%4;
	if(arr[x][y]==0)
		arr[x][y]=2;
	else
	{
		while(arr[x][y]!=0)
		{	
			x=rand()%4;
			y=rand()%4;
			if(arr[x][y]==0)
			{
				arr[x][y]=2;
				break;
			}
		}
	}
}
int notful(int arr[][4])
{
	int testit=0;
	int i=0,j;
	for(;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]==0)
				testit++;
		}
	}
	if(testit!=1)
		return 1;
	return 0;
}
void movit(int arr[][4],char way)
{
	int i,j;
	if(way=='w')
	{
		for(i=1;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				int a=i;
				while(arr[a-1][j]==0&&a-1>0)
				{
					arr[a-1][j]=arr[a][j];
					arr[a][j]=0;
					a--;
				}
				if(arr[a-1][j]==arr[a][j])
				{
					arr[a-1][j]*=2;
					arr[a][j]=0;
				}
				else if(arr[a-1][j]==0)
				{
					arr[a-1][j]=arr[a][j];
					arr[a][j]=0;
				}
			}
		}
	}
	else if(way=='s')
	{
		for(i=2;i>=0;i--)
		{
			for(j=0;j<4;j++)
			{
				int a=i;
				while(arr[a+1][j]==0&&a+1<4)
				{
					arr[a+1][j]=arr[a][j];
					arr[a][j]=0;
					a++;
				}
				if(arr[a+1][j]==arr[a][j])
				{
					arr[a+1][j]*=2;
					arr[a][j]=0;
				}
				else if(arr[a+1][j]==0)
				{
					arr[a+1][j]=arr[a][j];
					arr[a][j]=0;
				}
			}
		}
	}//
	else if(way=='a')
	{
		for(i=0;i<4;i++)
		{
			for(j=1;j<4;j++)
			{
				int a=j;
				while(arr[i][a-1]==0&&a-1>0)
				{
					arr[i][a-1]=arr[i][a];
					arr[i][a]=0;
					a--;
				}
				if(arr[i][a-1]==arr[i][a])
				{
					arr[i][a-1]*=2;
					arr[i][a]=0;
				}
				else if(arr[i][a-1]==0)
				{
					arr[i][a-1]=arr[i][a];
					arr[i][a]=0;
				}
			}
		}
	}//
	else if(way=='d')
	{
		for(i=0;i<4;i++)
		{
			for(j=2;j>=0;j--)
			{
				int a=j;
				while(arr[i][a+1]==0&&a+1<3)
				{
					arr[i][a+1]=arr[i][a];
					arr[i][a]=0;
					a++;
				}
				if(arr[i][a+1]==arr[i][a])
				{
					arr[i][a+1]*=2;
					arr[i][a]=0;
				}
				else if(arr[i][a+1]==0)
				{
					arr[i][a+1]=arr[i][a];
					arr[i][a]=0;
				}
			}
		}
	}//
}
