#include<stdio.h>
void fact(int *num);
int main()
{
	int sayi;
	int *sayinin_yeri;
	sayinin_yeri=&sayi;
	printf("Which number do you want to take factorial?");
	scanf("%d",&sayi);
	fact(sayinin_yeri);
	printf("%d",sayi);
	return 0;
}
void fact(int *num)
{
	int i=1,j=1;
	while (i <=*num)
	{
		j=j*i;
		i++;
	}
	*num=j;
}
