#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define p printf
#define s scanf
void sira(char arr[]);
int main (void)
{
	char dizi[10];
	p("10 adet kucuk harf giriniz: ");

	s("%s",dizi);

	sira(dizi);
	p("%s",dizi);
return 0;
}
void sira(char arr[])
{
	int i,d;
	do
	{
		d=0;
			for(i=0;i<10;i++)
				if(arr[i+1]>arr[i])
				{
					char temp=arr[i+1];//temp=b
					arr[i+1]=arr[i];//i+1=a
					arr[i]=temp;//i=b
					d=1;
				}
			
	}while(d);
}
