#include<stdio.h>
#include<locale.h>//ismim türkçe karakter içeriyordu
#define pr printf//Kod yazarken çabukluk saðlamak için
#define sc scanf
void add(float num1,float num2);//geriye deðer dönmeyecek iþini fonksiyonda halledecek
int main()
{setlocale(LC_ALL,	"Turkish");//anladýðým kadarýyla locale kütüphanesinin içinden neyi seçmek istediðimizi belirtiyoruz
	pr("%%%% WELCOME TO GTU CALCULATOR MACHÝNE %%%%\n");
	pr("%%%% STUDENT NAME:OZAN ARGIT ÖNÇEKEN %%%%\n");
	pr("%%%% PLEASE SELECT FROM THE FOLLOWING%%%%\n");
	pr("%%%% 		MENU		%%%%\n");
	pr("\n(1) ADD  TWO NUMBERS\n");
	pr("\n(2) SUBTRACT TWO NUMBERS\n");
	pr("\n(3) MULTIPLY TWO NUMBERS\n");
	pr("\n(4) DIVIDE TWO NUMBERS\n");
	pr("\n(5) TAKE THE NTH POWER OF A NUMBER\n");
	pr("\n(6) FIND AVERAGE OF NUMBERS INPUTTED\n");
	pr("\n(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n");
	pr("\n(0) EXIT\n");
	pr("\nPLEASE SELECT\n");
	
	int selecter;
	sc("%d",&selecter);
	while(selecter!=0)
	{	
		if(selecter==1)
		{
			float num1,num2;
			pr("PLEASE ENTER A NUMBER:");
			sc("%f",&num1);
			pr("PLEASE ENTER ANOTHER NUMBER:");
			sc("%f",&num2);
			add(num1,num2);
		}
		else
			pr("PLEASE ENTER VALID NUMBER");
		sc("%d",&selecter);	
	}	
	
	

	return 0;
}
void add(float num1,float num2)
{
	pr("%f",num1+num2);
}
