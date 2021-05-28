#include <stdio.h>
#include <math.h>
#include "ozycript.h"
int binary();
int main(void)
{
	int num;
	int a;
	pr("\nNumarayi gir(sadece 10 lu sistem sayilari):\n");
		sc("%d",&num);
	pr("\nKac tabaninda olsun\n");
		sc("%d",&a);
	int digit[8];
	int digi=ozy_takeintbina(digit,num);
	pr("\n%d",binary(digit,1,digi-1,a));
}
int binary(int arr[],int x,int sayac,int a)
{
	int sum=0;
	if(sayac>=0)
	{
		sum+=(arr[sayac])*x;
		x*=a;
		sayac--;
		sum+=binary(arr,x,sayac,a);
	}
	return sum;
}
