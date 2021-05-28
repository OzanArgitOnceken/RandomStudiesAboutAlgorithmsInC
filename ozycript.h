#ifndef ozycript
#define ozycript





#include<stdio.h>
#include <math.h>

#ifndef pr
#define pr printf
#endif


#ifndef sc
#define sc scanf
#endif








void ozy_triangle(int a)//keyfine üçgen bastýrýyo
{
	int i=1,j;
	for(;i<=a;i++)
	{
		for(j=0;j<i;j++)
			pr("* ");
		pr("\n");
	}
}


void ozy_readFile(char* ism)//doysa okuyo ekrana bastýrýyo
{
	FILE* dosya=fopen(ism,"r");
	while(!feof(dosya))
	{
		char a;
		fscanf(dosya,"%c",&a);
		pr("%c",a);
	}
}





void ozy_intXbox(int a[][20],int x)
{
	int i=0,j;
	for(;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			pr("%d ",a[i][j]);
		}
		pr("\n");
	}
}





void ozy_forXint(int arr[10000],int x)
{
	int i=0;
	for(;i<x;i++)
	{
		pr("%d ",arr[i]);
	}
}







void ozy_forXword(char arr[][1000],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		pr("%s",arr[i]);
	}
}




void ozy_takeint(int arr[],int a)
{
	int howdigi=log10(a);
	int i=howdigi;
	for(;i>=0;i--)
	{
		arr[i]=a%10;
		a/=10;
	}
}







int ozy_takeintbina(int arr[],int a)
{
	int temp=a;
	int digi=0;
	while(a!=0)
	{
		a/=10;
		digi++;
	}
	a=temp;
	int i=digi-1;
	for(;i>=0;i--)
	{
		arr[i]=a%10;
		a/=10;
	}
	return digi;
}

#endif
