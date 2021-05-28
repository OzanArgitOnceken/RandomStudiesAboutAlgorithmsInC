#include <stdio.h>
int addi(int* ,int);
int main()
{
	int para=0;
	int *ptr;
	ptr=&para;
	int giris=1;
	while(giris)//0 girene kadar
	{
	pr("Kac tl giris yaptiniz?");
	sc("%d",&giris);
	addi(ptr,giris);
	pr("Son para:\n%d\n",para);
	}
return 0;
}
int addi(int* yer,int degisim)
{
	*yer=*yer+degisim;
	return *yer;
}
