#include<stdio.h>
#include<stdlib.h>
//#include "libbr.h"
void quicksort(int* ,int,int);
int main()
{
	int dizi[]={12,1,33,45,124,87,32,90,9,8000,27};
	quicksort(&dizi[0],0,10);
	int i=0;
	for(i;i<11;i++)
	pr("%d	,",dizi[i]);
}
void quicksort(int* string ,int first,int last)
{
	int i,j,temp,pivot;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(i<last&&string[i]<=string[pivot])
			{
				i++;
			}
			while(j>first&&string[j]>=string[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		
		}
		temp=string[pivot];
		string[pivot]=string[j];
		string[j]=temp;
		quicksort(&string[0],j+1,last);
		quicksort(&string[0],first,j-1);
	}
}
