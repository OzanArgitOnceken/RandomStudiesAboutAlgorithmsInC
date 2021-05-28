#include <stdio.h>
#include <string.h>
struct ogrenci
{
	char name[20];
	char bolum[50];
	int numara;
	int sinif;
	float ortama;
}ogr;
void bosluk()
{
	pr("\n\n\n\n");
}
int main ()
{
	strcpy(ogr.name,"Ozan");
	strcpy(ogr.bolum,"Computer Science Engineering");
	ogr.numara=1901042259;
	ogr.sinif=1;
	ogr.ortama=3.34;
	pr("%s ",ogr.name);
	pr("\n%s",ogr.bolum);
	pr("\nNumber=%d \nClass=%d \nOrtalama=%.2f",ogr.numara,ogr.sinif,ogr.ortama);
	bosluk();
	struct ogrenci arif;
	strcpy(arif.name,"arif");
	strcpy(arif.bolum,"Makine");
	arif.sinif=2;
	arif.numara=171;
	arif.ortama=3.45;
	pr("%s\nbolum %s\n",arif.name,arif.bolum);
	pr("sinif %d\nnumara:%d\n ort:%.2f",arif.sinif,arif.numara,arif.ortama);
	
	bosluk();
	
	
	struct ogrenci *ptr=&arif;
	
	pr("%s\nbolum %s\n",(*ptr).name,(*ptr).bolum);
	pr("sinif %d\nnumara:%d\n ort:%.2f",(*ptr).sinif,(*ptr).numara,(*ptr).ortama);
	
	bosluk();
	pr("%s\nbolum %s\n",ptr->name,ptr->bolum);
	pr("sinif %d\nnumara:%d\n ort:%.2f",(*ptr).sinif,ptr->numara,(*ptr).ortama);
	/*
	struct ogrenci stud[5];
	
		sc("%s %s %d %d %f",&stud[0].name,&stud[0].bolum,&stud[0].sinif,&stud[0].numara,&stud[0].ortama);
	
		pr("%s \n %s\n %d \n %d \n %f",stud[0].name,stud[0].bolum,stud[0].sinif,stud[0].numara,stud[0].ortama);
	
	*/
	/*
	struct ogrenci stud[5];
	for(int i=0;i<5;i++)
	{
		sc("%s ")
	}
	*/
	
	
	
	
	
	
	
 return 0;
}

