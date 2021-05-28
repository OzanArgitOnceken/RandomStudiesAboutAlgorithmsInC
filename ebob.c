#include<stdio.h>
#include<stdlib.h>
int ebober(int a ,int d,int *x);
int main()
{
	int num1,num2,sonuc;
	int *ptr;
	ptr=&sonuc;
	pr("Enter The Num:\n");
	sc("%d %d",&num1,&num2);
	ebober(num1,num2,ptr);
	pr("%d",sonuc);
	
	
}
int ebober(int a,int b,int *x)
{
	int i=2;
	
	if(a<=b)
	{
		while(i<=a)
		{
			if(a%i==0&&b%i==0)
			{	
				*x=i;
			}
		i++;
		}
	}
	else
	{
		
		while(i<=b)
		{
			if(a%i==0&&b%i==0)
			{	
				*x=i;
			}
		i++;
		}
	}
	
}
