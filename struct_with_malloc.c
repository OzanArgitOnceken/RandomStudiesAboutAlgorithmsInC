#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct cities
{
	char name[20];
	int plaka;
};
int main()
{
	
	int* ptr;
	ptr=malloc(4*sizeof(struct cities));
	int i,j;
	
	
	
	free(ptr);
return 0;

}
