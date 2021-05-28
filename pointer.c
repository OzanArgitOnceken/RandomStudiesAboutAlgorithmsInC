#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
void degerdon(int* );
int main ()
{
	int a;
	sc("%d",&a);
	degerdon(&a);
	pr("%d",a);
	

 return 0;
}
void degerdon(int* harf)
{
	*harf=3**harf;
}

