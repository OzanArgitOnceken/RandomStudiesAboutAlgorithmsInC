#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct	stu
{
	int num;
	char *name;
};

int main ()
{

	int n,i;
	sc("%d",&n);
	struct stu *asd;
	asd=malloc(n*sizeof(asd));
	for(i=0;i<n;i++)
	{
		asd[i].num=i+1;
		asd[i].name="Ozan";
		pr("Number:%d		Name:%s\n",asd[i].num,asd[i].name);
		
	}
	free(asd);
	
 return 0;
}

