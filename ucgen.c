#include <stdio.h>
#include <conio.h>
void ucgen(int yildiz, int bosluk);
void ekrana_bastir(int x, char c);
int main() {
	int i;
	ucgen(17,0);

//getch();
	return 0;
}

void ekrana_bastir(int x, char c) {
	int i;
	for(i=0; i<x; i++)
		printf("%c", c);
}
void ucgen(int yildiz, int bosluk) 
{
	if(yildiz==1)
	 {
		ekrana_bastir(bosluk," ");
		printf("*");
		return;
	}

	ekrana_bastir(bosluk," ");
	ekrana_bastir(yildiz, "*");
	printf("\n");
	ucgen(yildiz-2, bosluk+1);
	printf("\n");
	ekrana_bastir(bosluk," ");
	ekrana_bastir(yildiz, "*");
	
return;
}
