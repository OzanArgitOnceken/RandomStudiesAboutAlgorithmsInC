#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define pr printf
#define sc scanf//fazla kutuphanenin zararý olmaz.
int main ()
{
	int i,j,a=0;
int dizi[8][8]=
	{
		{0,0,0,2,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,4},
	};
	int hesap[64];
	int k,p;
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
		{
				hesap[a]=50*dizi[i][j]-(i+j)*20;
				a++;
		}
		for(k=0;k<64;k++)
		{
			for(p=0;p<63;p++)
			{
				if(hesap[p]<hesap[p+1])
				{
				int temp;
				temp=hesap[p];
				hesap[p]=hesap[p+1];
				hesap[p+1]=temp;
				}
			}
		}
	//yer bulma:
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
		{
			if(hesap[0]==50*dizi[i][j]-(i+j)*20)
			
				{
					pr("Guney yonunde %d km\n",i);
					pr("Dogu yonunde %d km\n",j);
					pr("Organik yumurta teslim adedi:%d\n",dizi[i][j]);
					pr("Musteri odemesi=%d.00 Turk Lirasi\n",50*dizi[i][j]);
					pr("Gidis gelis=%d.00 tl\n",(i+j)*20);
					pr("elde edilen kar: %d.00 Turk lirasi",hesap[0]);
				
				}
			
		}
	
	

	
 return 0;
}
