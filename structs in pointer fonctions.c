#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct person
{
	int name;
	int height;	
	int *ptrn;
	int *ptrh;
};
void addi (int*,int*,int);
int main()
{
	struct person ozan;
	ozan.name=3;
	ozan.height=5;
	ozan.ptrn=&ozan.name;
	ozan.ptrh=&ozan.height;
	
	int add;
	int i;
	for(i=0;i<10;i++)
	{
		pr("eklemek istenilen deger:");
		sc("%d",&add);
		
		
		addi(ozan.ptrn,ozan.ptrh,add);
		
		pr("Name:%d\nHeight:%d",ozan.name,ozan.height);
	}

return 0;
}
void addi (int* name ,int* height,int add)
{
	*name+=add;
	*height+=add;
}
