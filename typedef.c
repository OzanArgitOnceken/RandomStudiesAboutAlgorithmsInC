#include <stdio.h>
	typedef struct person
	{
		char name[20];
		int weight;
		int height;
	}person;
int main ()
{
	/*
	typedef char karakter;
	karakter pow='j';
	pr("%c",pow);//char yerine karakter yazmamý saðladý
	*/
	struct person ozan;
	sc("%s %d %d",ozan.name,&ozan.weight,&ozan.height);
	
	pr("%s:weight:%d		height:%d",ozan.name,ozan.weight,ozan.height);
 return 0;
}

