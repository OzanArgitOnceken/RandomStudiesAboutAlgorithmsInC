#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"ozycript.h"


void main()
{
	int *a=NULL;
	int i=0;
	int k=4;
	while(k>0)
	{
		a=(int* )realloc(a,sizeof(int)*(i+1));
		pr("enter data\n");
		sc("%d",&k);
		a[i]=k;
		i++;
	}
	a=(int* )realloc(a,sizeof(int)*(i-1));
	a[i]=-1;
	i=0;
	while(a[i]!=-1)
	{
		pr("%d\n",a[i]);
		i++;
	}
	free(a);
}
