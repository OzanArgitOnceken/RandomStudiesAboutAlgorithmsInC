#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int test(char );
int main ()
{	
	char unlu[20];
	pr("giris:");
	sc("%s",unlu);
	if(test(unlu)==1)
	pr("uyumlu");
 return 0;
}
int test( char unlu[])
{
	int i,j;
	for(j=0;j<20;j++)
		for(i=0;i<20;i++)
			{	
				if(unlu[j]=='a'&&(unlu[i]=='o'||unlu[i]=='a'))
				return 1;
				else 
				return 0;
			}
}

