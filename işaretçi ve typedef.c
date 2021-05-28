#include <stdio.h>
typedef struct 
{
	int c;
}A;
void P (A );
void R (A *);
int main()
{
	A m,n;
	m.c=8;
	n.c=6;
	P(m);
	R(&n);
	printf("%d%d",m.c, n.c);
	return 0;
}
void P (A q)
{
	q.c = 2; return;
}
void R (A *w)
{
	(*w).c = 5*(*w).c; return;
}


