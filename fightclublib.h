#include <stdio.h>
#define pr printf
#define sc scanf
void  fightclub(int i)
{
	int j;
	for(j=0;j<i;j++)
	printf("Where is my mind?\n");
}
void ucgen(int i)
{
	int j,k;
	for(j=1;j<=i;j++)
		{
			for(k=0;k<j;k++)
				{
					pr("* ");
				}
			pr("\n");
		}
}
void topla(int a,int b)
{
	printf("Toplama islemi sonucunuz:%d",a+b);
}
void name()
{
	pr("Ozan Argit Onceken");
}

int buyuktenkucuge(int dizi[],int boyut)
{
	int k,n;
	int boyuts;
	boyuts=boyut;
	for(k=0;k<boyut;k++)
	{
		for(n=0;n<boyuts-1;n++)
		{
			if(dizi[n+1]<dizi[n])
			{
				int degisken;
				degisken=dizi[n+1];
				dizi[n+1]=dizi[n];
				dizi[n]=degisken;
			}
		}
	boyuts--;
	}
	return *dizi;
}

int kucuktenbuyuge(int dizi[],int boyut)
{
	int k,n;
	int boyuts;
	boyuts=boyut;
	for(k=0;k<boyut;k++)
	{
		for(n=0;n<boyuts-1;n++)
		{
			if(dizi[n+1]>dizi[n])
			{
				int degisken;
				degisken=dizi[n+1];
				dizi[n+1]=dizi[n];
				dizi[n]=degisken;
			}
		}
	boyuts--;
	}
	return *dizi;
}
