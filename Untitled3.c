#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"ozycript.h"
void main()
{
	int size;
	pr("Enter size\n");
	sc("%d",&size);
	int *arr=(int*)malloc(sizeof(int)*(size+1));
	int i=0;
	for(;i<=size;i++)
		sc("%d",&arr[i]);
	for(i=0;i<size;i++)
		pr("<%d>\n",arr[i]);
	int *cp;
	cp=arr;
	int cpp;
	cpp=*cp;
	pr("%d",cpp);
	pr("\n<<%d>>\n",cp[2]);
	free(cp);
	pr("%d",arr[0]);
}

