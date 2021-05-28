#include<stdio.h>
#include<stdlib.h>
#define pr printf
#define sc scanf
int main()
{
	int kac, cho=1;
	pr("Kac ogrenci?");
	sc("%d",&kac);
	int *dizi;
	dizi=(int*)malloc(sizeof(int)*kac);
	int i=0;
	for(i;i<kac;i++)
		{
			dizi[i]=0;
		}
	i=0;
	while(cho)
	{
		int num;
		pr("Islem seciniz");
		sc("%d",&cho);
		if(cho==1)
		{
			sc("%d",&num);
			dizi[i]=num;
			i++;
		}
		else if(cho==2)
		{
			int j=0;
			for(j;j<i;j++)
				pr("%d\n",dizi[j]);
		}
		else if(cho==3)
		{
			int which;
				pr("Please enter which you want to change:");
				sc("%d",&which);
			if(dizi[which-1]==0)
			{
				pr("We can not find a number there.");
			}
			else
			{
				
				pr("Please enter number:");
				sc("%d",&num);
				dizi[which-1]=num;
			}
		}
		else if(cho==4)
		{
			int kacinci;
			pr("Kacinci sayiyi silmek istiyorsunuz?");
			sc("%d",&kacinci);
			if(dizi[kacinci-1]==0)
				pr("Uzgunzu oyle bir sayi yok.");
			else
			{
				while(dizi[kacinci]!=0)
				{
					dizi[kacinci-1]=dizi[kacinci];
					kacinci++;
				}
				dizi[kacinci]=0;
			}
		}
		else if(cho==5)
		{
			pr("Ogrenci numarasi kac?");
				sc("%d",&num);
			int a=0;
			while(dizi[a]!=num||dizi[a]!=0)
			{
				if(dizi[a]==num)
				{
					pr("Ogrenci %d. sirada",a+1);
				}
				a++;
			}
			if(dizi[a]==0)
			{
				pr("Numara bulunamadi");
			}
		}
		else if(cho==6)
		{
			cho=0;
		}
			
	}
	free(dizi);
}


