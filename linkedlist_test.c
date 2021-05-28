#include<stdio.h>
typedef struct node dgm;
struct node{
	int boyut;
	dgm* next_adress; 
};
void printlelen(dgm *adres);
dgm* yarat(int value);
int main()
{
	int cho=1;
	
	
	dgm* tmp;
	
	while(cho)
	{
		sc("%d",&cho);
		tmp=yarat(cho);
		printlelen(tmp);
	}
	
}
void printlelen(dgm *adres)
{
	
	
	while(adres!=NULL)
	{
		printf("%d   ",adres->boyut );
		adres=adres->next_adress;
		pr("%d ",adres);
		pr("\n");
	}
}

dgm* yarat(int value)
{
	dgm* result;
	result=(result*)malloc(sizeof(dgm));
	result->boyut=value;
	result=result->next_adress;
	return result;
}
