#include<stdio.h>
#define pr printf
int cont (int low ,int high,int num,int* control);//long komutunu araþtýr
int main ()
{
	int number=1,low,high;
	pr("Enter lowest number:");
	scanf("%d",&low);
	pr("Enter High number:");
	scanf("%d",&high);
	int control=0;
	int *controller;
	controller=&control;
	while(number!=-1)
		{
			pr("Enter a number:");
			scanf("%d",&number);
			cont(low,high,number,controller);
		}
	pr("%d numbers in ",control);
	return 0;
}
int cont (int low ,int high,int num,int* control)
{
	if(low<num&&num<high)
		*control+=1;
	return *control;
}
