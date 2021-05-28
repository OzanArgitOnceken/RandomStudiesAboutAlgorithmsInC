#include<stdio.h>
#include<stdlib.h>
void withdraw(int );
int main()
{
	int money;
	pr("How much money you want to withdraw \n");
	
	sc("%d",&money);
	
	withdraw(money);
	
}


void withdraw(int x)
{
	int test=0;
	int kalan=x;
	pr("Al sana ");
	while(test<x)
	{
		if (kalan>=200)
		{
			pr(" 200 tl");
			test+=200;
			kalan =x-test;
		}
		else if (kalan>=100)
		{
			pr(" 100 tl");
			test+=100;
			kalan =x-test;
		}
		else if (kalan>=50)
		{
			pr(" 50 tl");
			test+=50;
			kalan =x-test;
		}
		else if (kalan>=25)
		{
			pr(" 25 tl");
			test+=25;
			kalan =x-test;
		}
		else if (kalan>=20)
		{
			pr(" 20 tl");
			test+=20;
			kalan =x-test;
		}
		else if (kalan>=13)
		{
			pr(" 13 tl");
			test+=13;
			kalan =x-test;
		}
		else if (kalan>=10)
		{
			pr(" 10 tl");
			test+=10;
			kalan =x-test;
		}
		else if (kalan>=5)
		{
			pr(" 5 tl");
			test+=5;
			kalan =x-test;
		}
		else if (kalan>=1)
		{
			pr(" 1 tl");
			test+=1;
			kalan =x-test;
		}
	}
}
