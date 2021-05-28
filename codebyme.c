#include<stdio.h>
#include<stdlib.h>
int howlong(int ,int );
int bina(int ,int );
//void myloop(int ,int);
int andop (int a, int b);
int main()
{
	int fi,se,t=0;
	pr("First Integer:");
	sc("%d",&fi);
	pr("Second Integer:");
	sc("%d",&se);
	if(!howlong(se ,fi ))
		pr("Integers should have the sanme lenght, please enter 2 new integers.\n");
	
	if(!bina(fi,se))
		pr("Integers should be binary , please enter 2 new integers.\n");
	while(!(howlong(se ,fi )&&bina(fi,se)))
	{
		if(!howlong(se ,fi )&&t!=0)
			pr("Integers should have the sanme lenght, please enter 2 new integers.\n");
			
		if(!bina(fi,se)&&t!=0)
			pr("Integers should be binary , please enter 2 new integers.\n");
		pr("First Integer:");
		sc("%d",&fi);
		pr("Second Integer:");
		sc("%d",&se);
		t++;
	}
	pr("Result=%d",andop(fi,se));
}

int howlong(int a,int b)
{
	int la=0,lb=0;//a's long ,b's long
	while(a)
	{
		a/=10;
		la++;
	}
	while(b)
	{
		b/=10;
		lb++;
	}
			if(la==lb)
				return 1;
			else 
				return 0;
}
int bina(int a,int b)
{
	int ba,bb;//binary a,binary b
	while (a)
	{
		ba=a%10;
		a/=10;
		if(ba!=0&&ba!=1)
			return 0;
	}
	while (b)
	{
		bb=b%10;
		b/=10;
		if(bb!=0&&bb!=1)
			return 0;
	}
	return 1;
}
int andop (int a, int b)
{
	int c=0;//c= result
	int tempa=a;
	while(a)//I do not have to write a and b because they have got same lenght.
	{
		c+=(a%2)*(b%2);
		c*=10;
		a/=10;
		b/=10;
	}
	int deca=0,decc=0;//decimal of a ...
	a=tempa;
	while(a)
	{
		a/=10;
		deca++;	
	}	
	int temp=c;
	while(c)
	{
		c/=10;
		decc++;
	}
	if(decc!=deca)//thats part for sometimes user enters 1000 and 1111 and result =10
	{//and this part makes it 1000
		int i=0;
		while(i<deca-decc)
		{
			temp*=10;
			i++;
		}
	}
	c=temp;
	
	return c;
}
/*

void myloop(int t1,int t2)//test1,test2
{
	int a=7,b=9;//it is for enter the loop
	if(!t1)
		pr("Integers should have the sanme lenght, please enter 2 new integers.\n");
	if(!t2)
		pr("Integers should be binary , please enter 2 new integers.");
	while(!(howlong(a,b)&&bina(a,b)))	
	{	if(howlong(a,b)
			pr("Integers should have the sanme lenght, please enter 2 new integers.\n");
		if(bina(a,b))
			pr("Integers should be binary , please enter 2 new integers.");
		pr("First Integer:");
		sc("%d",&fi);
		pr("Second Integer:");
		sc("%d",&se);
		
	}
}
*/
