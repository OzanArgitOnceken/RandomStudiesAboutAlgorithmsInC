#include<stdio.h>
#include<time.h>
#include<windows.h>
int main()
{
	int a,b,c,i,j,k,l,m,n,o,p;
	printf("kare boyutu	");
	scanf("%d",&a);
	printf("dikey tekrar	");
	scanf("%d",&b);
	printf("yatay tekrar	");
	scanf("%d",&c);
	for(m=0;m<b;m++)
	{
		printf("\n\n");
	
	
	{
		for(o=0;o<c;o++)
		{
	for(i=0;i<a;i++)

		{
			printf("* ");
	
		}
		printf("	");
		}
		
			printf("\n");
			
			
	for(n=2;n<c;n++)
	{
	for(j=0;j<a;j++)
	{
		printf("*");
		for(k=2;k<2*a-1;k++)
		{
			printf(" ");
		}
		printf("*");
		printf("	");
		}
		printf("\n");
		}
	
	for(p=0;p<c;p++)
	{
	
	for(l=0;l<a;l++)
		{
			printf("* ");
		}
		printf("	");
		}
		}
	
	}
	return 0;
}
