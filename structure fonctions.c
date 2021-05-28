#include<stdio.h>
#include<string.h>
struct ogrenci
{
	int boy;
	char name[20];
};
struct tarih
{
	int gun;
	int ay;
	int yil;	
};
int lister(struct ogrenci x,struct tarih t,int* day );
int main()
{
	struct ogrenci ozan;
	ozan.boy=1.81;
	strcpy(ozan.name,"Ozann");
	struct tarih bugun;
	bugun.gun=4;
	bugun.yil=1999;
	bugun.ay=10;
	int *pday;
	pday=&bugun.gun;
	int i;
	for(i=0;i<10;i++)
	{
		lister(ozan,bugun,pday);
		pr("\n");
	}
	return 0;
}
int lister(struct ogrenci x,struct tarih t,int* day )
{
	pr("%s\n",x.name);
	pr("%d/%d/%d\n",t.gun,t.ay,t.yil);
	*day=*day+1;
	return *day;
}
