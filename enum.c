#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int main ()
{

enum 
{
	bir=1,iki,uc,dort,bes,alti,yedi,sekiz,dokuz
};
	char sayi1[9],sayi2[9],sayi3[9];
	pr("uc sayi gir:");
	sc(" %s",sayi1);
	sc(" %s",sayi2);
	sc(" %s",sayi3);
	int dizi[3]={*sayi1,*sayi2,*sayi3};
	int i;
				int temp;
	for(i=0;dizi[i]!='\0';i++)
		{
			if(dizi[i]<dizi[i+1])
				temp=dizi[i];
				dizi[i]=dizi[i+1];
				dizi[i+1]=temp;
		}	
		pr("%d",dizi[1]);
 return 0;
}

