#include<stdio.h>
#include<stdlib.h>
typedef struct students stu;
struct students
{
	char name[10];
	int point;	
	stu *next;
};
int main()
{
	stu *some;
	int k;
	pr("How many student?\n");
	
	sc("%d",&k);
	
	some=malloc(k*sizeof(stu));
	int i;
	for(i=0;i<k;i++)
	{
		pr("%d.Ogrencinin ismi\n",i+1);
		sc("%s",&some[i].name);
	
		pr("%d.Ogrencinin puani\n",i+1);
		sc("%d",&some[i].point);
		some[i].next=&some[i+1];
		
	}
	for(i=0;i<k;i++)
	{
		pr("%d.Ogrencinin ismi=%s\n",i+1,some[i].name);
		pr("%d.Ogrencinin puani=%d\n",i+1,some[i].point);
		pr("Adres=%d\n",some[i].next);
		
	}
	pr("%d",sizeof(stu));
	free(some);
}
