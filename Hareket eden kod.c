#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
void imlec_xy(int x, int y) ;
int main ()
{char yon;
int i;
imlec_xy(20,10);
yon=getch();

	while(yon=='d')
 	{
	
		{
		
 		for(i=0;;i++)
 		{Sleep(150);
 		imlec_xy(i,10);
		if(kbhit())
		break;
		} //bir tuþa basýlmadýkça
 		yon=getch();
		}
	}
	while(yon=='a')
	{
		for(i=0;;i--)
 		{
		Sleep(150);
 		imlec_xy(i,10);
		if (kbhit())
			break;
		} 
		
		yon=getch();
	} 
while(yon=='s')
 {
 	for(i=0;;i--)
 	{Sleep(1);
 	imlec_xy(20,i);
		if (kbhit())
		
			break;
		
	}
		yon=getch();
 }
while (yon=='w')
 {
 	for(i=0;;i++)
 	{Sleep(150);
 	imlec_xy(20,i); 
 	if(kbhit())
		
			break;
		
	}
		yon=getch();
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
