#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
int main (void)
{
	int bir,agac,ciz;
	for(bir=0;bir<10;bir++)
	{
	for(agac=0;agac<9-bir;agac++)
	p(" ");
	for(agac=0;agac<bir+1;agac++)
	p("* ");
	p("\n");
	}
	for(ciz=0;ciz<2;ciz++)
	for(bir=5;bir<10;bir++)
	{
	for(agac=0;agac<9-bir;agac++)
	p(" ");
	for(agac=0;agac<bir+1;agac++)
	p("* ");
	p("\n");
	}
	for(bir=0;bir<10;bir++)
	p("     * * * *\n");
return 0;
}
