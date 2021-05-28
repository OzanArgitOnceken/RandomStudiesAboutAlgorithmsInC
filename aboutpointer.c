#include<stdio.h>
#define pr printf
int main()
{	
	int a;
	int *p;
	p=&a;
	a=7;
	printf("addres of a=%d\n",&a);
	pr("adress of p=%d\n",p);
	pr("adress of *p=%d\n",&p);
	pr("value of a=%d\n",*p);
	pr("value of *p=%d\n",*p);
	int b=9;
	*p=b;
	pr("value of a=%d\n",a);
	pr("value of *p=%d\n",*p);
	pr("address of p is %d \n",p);
	pr("size of byte is %d\n",sizeof(int));
	p++;
	pr("new adress of p is =%d\n",p);
	pr("value of new adress of p=%d\n",*(p));
	pr("value of new adress of p+1=%d\n",*(p+1));
	*p=3;
	pr("a=%d\n",a);
	pr("b=%d\n",b);
	pr("p=%d\n",p);
	pr("value of p=%d",*p);
	
	
	
	return 0;
}
