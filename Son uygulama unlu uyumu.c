#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int main ()
{
	char a[999];
	char tutucu[999];
	sc("%s",a);
	pr("Girdin ki : %s\n",a);
	int i;
	int j=0,k=0;
	for(i=0;a[i]!='\0';i++)
		if(a[i]=='a'||a[i]=='ý'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='i'||a[i]=='ö'||a[i]=='ü')
		{
			tutucu[j]=a[i];
			j++;
		}
		int sayi=strlen(tutucu);
	pr("tuttu ki: %s\n",tutucu);
	if(tutucu[0]=='a'||tutucu[0]=='ý'||tutucu[0]=='o'||tutucu[0]=='u')
	{
		int i=0;
		while(tutucu[i]!='\0')
		{
			if(tutucu[i]=='a'||tutucu[i]=='ý'||tutucu[i]=='o'||tutucu[i]=='u')
			{
				k++;
			}
			i++;
		}
		pr("%d",k);
		if(k==sayi)
		pr("Uyum var");
		else
		pr("uyum yok");
	}	
	else 
	{
		
		while(tutucu[i]!='\0')
		{
		int i=0;
			if(tutucu[i]=='e'||tutucu[i]=='i'||tutucu[i]=='ö'||tutucu[i]=='ü')
			{
				k++;
			}
			i++;
		}
		if(k==sayi)
		pr("Uyum var");
		else
		pr("uyum yok");
	}

 return 0;
}
