#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[]={2,4,5,6,9};
	int i;
	for(i=0;i<5;i++)
	{
		pr("Adress=%d\n",&a[i]);
		pr("Adress=%d\n",a+i);
		
		pr("Adress=%d\n",a[i]);
		pr("Adress=%d\n",*(a+i));
	}
}

