/*
#include <stdio.h>

int main (void)//yazd�ran
{
FILE *dosya;
dosya =fopen("sycs","w");//r+ y� da dene
char isim[]="ozan";
int i,j;
fprintf(dosya,"Meraba %s carpim tablosuna hos geldin\n",isim);
for(i=0;i<=10;i++)
	{
  		for(j=0;j<=10;j++)
  			{
  				fprintf(dosya,"%d*%d=%d\n",i,j,i*j);
			}
		fprintf(dosya,"\n\n\n");
	}
fclose(dosya);
return 0;
}
#include <stdio.h>

int main (void)//de�er al�p yazd�r�r
{
	FILE* dosya;
	dosya=fopen("okul.txt","w");
	char okul[50],bolum[50],isim[50];
	printf("Adiniz:");gets(isim);//gets enter a kadar al�r
	printf("Okulunuz:");gets(okul);//gets enter a kadar al�r
	printf("Bolumunuz:	");gets(bolum);//gets enter a kadar al�r
	
	fprintf(dosya,"%s     %s     %s",isim,okul,bolum);
	return 0;
}




#include <stdio.h>

int main (void)//deger alir.
{
//fgetc==dosyadan tek bi karakter okur
//fscanf==dosyadan bi�imlendirilmi� karakter okur.
	FILE*dosya;
	dosya=fopen("sycs.txt","r");
	char karakter;
	if(dosya!=NULL)
	{
		karakter=fgetc(dosya);
		printf("%c",karakter);
	}
	else 
	printf("dosya bulunamadi");
	
	return 0;
}

#include <stdio.h>

int main (void)//al�r ve ekrana yazd�r�r.
{
//fgetc==dosyadan tek bi karakter okur
//fscanf==dosyadan bi�imlendirilmi� karakter okur.
	FILE*dosya;
	dosya=fopen("sycst.txt","r");
	char kelime[50][20];
	int i;
	if(dosya!=NULL)
	{
		while(!feof(dosya))
			{
				fscanf(dosya,"%s",kelime[i]);
				printf("%s",kelime[i]);
				i++;	
			}
	}
	else 
	printf("dosya bulunamadi");
	
	return 0;
}
*/

#include <stdio.h>

int main (void)//
{
	FILE* dosya;
	int sayi[96],i;
	dosya=fopen("sycs.txt","r");
	if(dosya!=NULL)
		{
			while(!feof(dosya))
				{
					sayi[i]=fgetc(dosya);
					printf("%d\n",sayi[i]-'0');
					i++;
				}
		
		}
	else
		printf("Dosya bulunamadi.");
		return 0;
}
	









