#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include<time.h>
//void karetoplama(int ,int ,int [][]);
int main ()
{
	srand(time(NULL)); 
	int karetoplam,toplam,p,kac,i,k,j,rast[10][10];
	pr("kac basamakli olsun?");
	sc("%d",&kac);
	for(i=0;i<10;i++)//doldurur
		{
			for(j=0;j<10;j++)
				rast[i][j]=rand()%10;
		}
	if(kac%2==0)
		{	
			for(i=0;i<kac;i++)
				{
					for(j=0;j<kac;j++)
						{
							pr("%d ",rast[i][j]);
						}
						for(k=0;k<kac-1;k++)
						rast[i][k+1]=rast[i][k]+rast[i][k+1];
						karetoplam=rast[i][k];
						pr("   |%d\n",karetoplam);
				}	
		}
	else
		{
			for(i=0;i<kac;i++)
				{
					for(j=0;j<kac-i;j++)
						{
							pr("%d ",rast[i][j]);
						}
					int fark=i+1;
					for(k=0;k<fark;k++)
						{
							pr("  ");
						}
					for(p=0;p<kac-i;p++)
						{
							rast[i][p+1]=rast[i][p]+rast[i][p+1];
							toplam=rast[i][p];
						}
						pr("|");
						pr("%d",toplam);
					pr("\n");
				}
		}
	for(i=0;i<kac;i++)
		pr("- ");
		pr("\n");
		if(kac%2==0)
			
			{		
				int don;
				for(don=0;don<kac;don++)
				{
					int karealt;
					rast[i][i]=rast[i+1][i]+rast[i][i];
					karealt=rast[i][i];
					pr("%d ",karealt);
				}
			}
 return 0;
}
/*
void karetoplama(int a,int b,int dizi[a][b])
{
	int i;
	for(i=0;i<a;i++)
	{
		int toplam;
		dizi[i][i]=dizi[i+1][i]+dizi[i][i];
		pr("%d ",toplam);
		
	}
	
		
}

*/







