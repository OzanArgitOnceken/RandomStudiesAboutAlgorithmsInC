#include <stdio.h>
struct person
{
	int weight;
	char name;
	int height;
}sikko={12,'f',5},sikik={134,'d',56};
/*	typedef usage
	typedef int ali;
	ali a=4;
*/
int main ()
{
	struct person fatma;
	fatma.height=150;
	fatma.name='f';
	fatma.weight=112;
	pr("Fatmas height=%d,Weight=%d,name=%c\n",fatma.height,fatma.weight,fatma.name);
	struct person ozan={93,'o',181};
	pr("sikko height=%d,Weight=%d,name=%c\n",sikko.height,sikko.weight,sikko.name);
	pr("sikik height=%d,Weight=%d,name=%c\n",sikik.height,sikik.weight,sikik.name);
	pr("ozan height=%d,Weight=%d,name=%c\n",ozan.height,ozan.weight,ozan.name);
	pr("%d",a);
 return 0;
}

