#include <stdlib.h>//tek tek uzun uzadýya hareket
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include "ozycript.h"
#define sc scanf
#define pr printf
void imlec_xy(int , int) ;//hareketi saðlar
void imlecgizle();//imleci gizler
void sinirtesti(int,int,int,int);//uzay gemisinin 
void gameover(int* ,int* ,int ,int,int);//uzay gemisinin çarpýþýp çarpýþmadýðýný kontrol eder
void takipet(int* ,int* ,int,int);//uzaylýlarý takip ettiren algoritma
int main ()
{srand(time(NULL));

	int i,j;
	char giris[999]={"Merhaba yolcu bu oyundaki gorevin saldirgan uzaylilari bir araya getirip tek bomba ile imha etmek bir araya toplamaktir.(Oyuna baslamadan once tamekran moduna gecmeniz tavsiye edilir.)\nOyunu oynamak icin w a s ve d tuslari kullanilir\nBu tuslara basili tutmak degil bir kere basip cekmek gerekir.\n"};
	for(i=0;giris[i]!='\0';i++)
		{
			pr("%c",giris[i]);
			Sleep(15);
		}
	int genislik,yukseklik,e;
	char genis[999]={"Genislik giriniz(Tavsiye edilen=48)"};
	for(i=0;genis[i]!='\0';i++)
		{
			pr("%c",genis[i]);
			Sleep(15);
		}
	sc("%d",&genislik);
	char yuksek[999]={"Yukseklik giriniz(Tavsiye edilen=48)"};
	for(i=0;yuksek[i]!='\0';i++)
		{
			pr("%c",yuksek[i]);
			Sleep(15);
		}
	sc("%d",&yukseklik);
	char ds[999]={"Dusman sayisini giriniz.(Tavsiye edilen=12)"};
	for(i=0;ds[i]!='\0';i++)
		{
			pr("%c",ds[i]);
			Sleep(15);
		}
	sc("%d",&e);
	char zor[999]={"Zorluk giriniz(1 ila 10 arasi)"};
	for(i=0;zor[i]!='\0';i++)
		{
			pr("%c",zor[i]);
			Sleep(15);
		}
		int zorluk;
		sc("%d", &zorluk);
	int enemy[e][2];
	for(i=0;i<e;i++)
		{
			enemy[i][0]=rand()%genislik;
			enemy[i][1]=rand()%yukseklik;
		}
	system("cls");
	char yon;
	int x=rand()%genislik,y=rand()%yukseklik,yavaslatici;
	for(i=0;i<yukseklik;i++)//32 32
		{
			for(j=0;j<genislik;j++)
				{	
				if(i==0||i==yukseklik-1)
					pr("--");			
				else if(j==0||j==genislik-1)
					pr("|");
				else
					pr("  ");
				}
			pr("\n");
		}
	int tester;
	imlecgizle();
	while(1)
 	{
	yon=getch();
		
			
 		if(yon=='d')
 		{	
 			for(;x<150;x++)
 				{Sleep(100);
 				imlec_xy(x,y);
	 				pr("O");
 				imlec_xy(x-1,y);
 				pr(" ");
 				sinirtesti(x,y,genislik,yukseklik);
 					if(kbhit())
 						break;
 				yavaslatici++;
 					tester=0;
 						for (i=0;i<e;i++)
 							if(enemy[i][0]==enemy[0][0])
 								tester++;
 								if(tester==e)
 									{
 									system("color 20");	
									Sleep(200);
									system("color 06");
									Sleep(150);
									system("color 20");	
									Sleep(100);
									system("color 06");
									Sleep(50);
									system("color 20");	
									Sleep(25);
									system("color 06");	
									exit(1);
									}
 								
 
				while(yavaslatici%(10-zorluk)==0)
 					{
 							for(i=0;i<e;i++)
 								takipet(&enemy[i][0],&enemy[i][1],x,y);
 								yavaslatici++;
							
					}					
							for(i=0;i<e;i++)
 								gameover(&enemy[i][0],&enemy[i][1],x,y,tester);
				}
		}
		else if(yon=='a')	
 			for(;x>0;x--)
 				{Sleep(100);
 				imlec_xy(x,y);
 				pr("O");
 				imlec_xy(x+1,y);
 				pr(" ");
 				sinirtesti(x,y,genislik,yukseklik);
 					if(kbhit())
 						break;
 					yavaslatici++;
 					tester=0;
 						for (i=0;i<e;i++)
 							if(enemy[i][0]==enemy[0][0])
 								tester++;
 								if(tester==e)
 									{
 									system("color 20");	
									Sleep(200);
									system("color 06");
									Sleep(150);
									system("color 20");	
									Sleep(100);
									system("color 06");
									Sleep(50);
									system("color 20");	
									Sleep(25);
									system("color 06");	
									exit(1);
									}
 					
				while(yavaslatici%(10-zorluk)==0)
 					{
 							for(i=0;i<e;i++)
 								takipet(&enemy[i][0],&enemy[i][1],x,y);
 								yavaslatici++;
							
					}
 							for(i=0;i<e;i++)
 								gameover(&enemy[i][0],&enemy[i][1],x,y,tester);
				}
		
 		else if(yon=='s')
 		{	
 			for(;y<150;y++)
 				{Sleep(100);
 				imlec_xy(x,y);
 				pr("O");
 				imlec_xy(x,y-1);
 				pr(" ");
 				sinirtesti(x,y,genislik,yukseklik);
 					if(kbhit())
 					break;
 						yavaslatici++;
 					tester=0;
 						for (i=0;i<e;i++)
 							if(enemy[i][0]==enemy[0][0])
 								tester++;
 								if(tester==e)
 									{
 									system("color 20");	
									Sleep(200);
									system("color 06");
									Sleep(150);
									system("color 20");	
									Sleep(100);
									system("color 06");
									Sleep(50);
									system("color 20");	
									Sleep(25);
									system("color 06");	
									exit(1);
									}
				while(yavaslatici%(10-zorluk)==0)
 					{
 							for(i=0;i<e;i++)
 								takipet(&enemy[i][0],&enemy[i][1],x,y);
 								yavaslatici++;
							
					}
 							for(i=0;i<e;i++)
 								gameover(&enemy[i][0],&enemy[i][1],x,y,tester);
				}
		}
 		else if(yon=='w')
 		{	
 			for(;y>0;y--)
 				{Sleep(100);
 				imlec_xy(x,y);
 				pr("O");
 				imlec_xy(x,y+1);
 				pr(" ");
 				sinirtesti(x,y,genislik,yukseklik);
 					if(kbhit())
 						break;
 						yavaslatici++;
 					tester=0;
 						for (i=0;i<e;i++)
 							if(enemy[i][0]==enemy[0][0])
 								tester++;
 								if(tester==e)
 									{
 									system("color 20");	
									Sleep(200);
									system("color 06");
									Sleep(150);
									system("color 20");	
									Sleep(100);
									system("color 06");
									Sleep(50);
									system("color 20");	
									Sleep(25);
									system("color 06");	
									exit(1);
									}
				while(yavaslatici%(10-zorluk)==0)
 					{
 							
 							for(i=0;i<e;i++)
 								takipet(&enemy[i][0],&enemy[i][1],x,y);
 								yavaslatici++;
							
					}
 							for(i=0;i<e;i++)
 								gameover(&enemy[i][0],&enemy[i][1],x,y,tester);
						
				}
		}
	
		
	}

	return 0;

}


void imlec_xy(int x, int y) 
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void takipet(int* ex,int* ey,int x,int y)
{
	
	if((*ex<x)&&(*ey<y))
	{	*ex=*ex+1;
		*ey=*ey+1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex-1,*ey-1);
 			pr(" ");
	}

	else if((*ex<x)&&(*ey>y))
	{	*ex=*ex+1;
		*ey=*ey-1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex-1,*ey+1);
 			pr(" ");
	}	
		

	else if((*ex>x)&&(*ey>y))
	{	*ex=*ex-1;
		*ey=*ey-1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex+1,*ey+1);
 			pr(" ");
		
		
	}
	else if((*ex>x)&&(*ey<y))
	{
		*ex=*ex-1;
		*ey=*ey+1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex+1,*ey-1);
 			pr(" ");
		
	}
	else if((*ex>x)&&(*ey==y))
	{
		*ex=*ex-1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex+1,*ey);
 			pr(" ");
		
	}
	else if((*ex<x)&&(*ey==y))
	{
		*ex=*ex+1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex-1,*ey);
 			pr(" ");
		
	}
	else if((*ex==x)&&(*ey>y))
	{
		*ey=*ey-1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex,*ey+1);
 			pr(" ");
		
	}
	else if((*ex==x)&&(*ey<y))
	{
		*ey=*ey+1;
 			imlec_xy(*ex,*ey);
 			pr("*");
 			imlec_xy(*ex,*ey-1);
 			pr(" ");
		
	}
}
void gameover(int* ex,int* ey,int x,int y,int olendusman)
	{
		if((*ex==x)&&(*ey==y))
		{	
		int a;
			system("color 40");	
			Sleep(200);
			system("color 06");
			Sleep(150);
			system("color 40");	
			Sleep(100);
			system("color 06");
			Sleep(50);
			system("color 40");	
			Sleep(25);
			system("color 06");
			for(a=1;a<olendusman*2;a++)
			{
				pr("%d tane dusman oldurdunuz",a);
				Sleep(200);
				system("cls");
			}
			pr("%d tane dusman oldurdunuz",olendusman*2);
			exit(1);
		}
	
		
	}

void imlecgizle() 
{
	HANDLE x=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO i;
	i.dwSize=100;
	i.bVisible=FALSE;
	SetConsoleCursorInfo(x,&i);
}


void sinirtesti(int x,int y,int genislik,int yukseklik)
{
	if(x==0||x==(genislik-1)*2||y==0||y==(yukseklik-1))
	{
			system("color 40");	
			Sleep(200);
			system("color 06");
			Sleep(150);
			system("color 40");	
			Sleep(100);
			system("color 06");
			Sleep(50);
			system("color 40");	
			Sleep(25);
			system("color 06");
			
			exit(1);
	}
}
