#include<stdio.h>
#include<unistd.h>
int para=10000;
void uyu()//istenilen yerlerde 3 saniye bekletir
	{sleep(3);
	}
void no()//cevap yalnissa parayi azaltir ve 1 saniye bekletir
	{printf("Malesef yalnis cevap\nParaniz:%d\n",para-=5000);
	sleep(1);
	}
void yes()//cevap dogruysa parayi arttirir ve 1 saniye bekle
	{printf("Soruyu bildiniz!\nParaniz:%d\n",para+=10000);
	sleep(1);
	}
int main()
{double a;
printf("TC'nizi giriniz:");
scanf("%lf",&a);
if(a>=10000000000 && a<=99999999999)//tc nin 11 haneli olmasini saglar
{
	char cevap1,cevap2,cevap3;
	int tel,cevap4,cevap6,cevap5;
	printf("Yarisma basliyor\n");
	sleep(1);
	printf("Hesabiniza 10.000 TL yatirilmistir. Dogru bilinen her cevap icin 10.000 TL daha kazanacaksiniz r.\nYanlis her cevap hesabinizden 5.000 Tl yi siler. Eger fazla yalnis yaparaniz bize para odersiniz.Bos birakip risk almama gibi bir sansiniz de vardir. Bazi sorularda\n size joker hakki taninacaktir bunlari dikkatli kullaniniz.\n");
	uyu();
	printf("Soru 1:\n");
	printf("Asagidakilerden hangisi bir Bil 141 ogrencisinin yapmasi gereken davranistir?\n");
		printf("A)Haftasonu 8 saat kod yazmak	B)Dersin zor oldugunu kabul edip bir sonraki donem almak\n");
		printf("C)Her gun duzenli kod yazmak	D)DD nin yeterli olduguna inanmnak;\n");
		scanf(" %c", &cevap1);
			switch(cevap1)
				{
					case 'a': no(); break;
					case 'b': no(); break;
					case 'c': yes(); break;
					case 'd': no(); break;
					default:printf("Paraniz :%d",para);break;
				}
		printf("Soru 2:\n");
		printf("Genellikle terkeden tarafin karsisindakini uzmemek icin soyledigi soz hangisidir?\n");
			uyu();
			printf("!!!Bu soru icin telefon joker hakkiniz bulunmaktadir!!! Kullanmak Zorundaniz\n");
			printf("H)Dostluk kazandi	J)Geregini yapacagim\n");
			printf("N)Elektrik alamadim	M)Arkadas kalalim\n");
			printf("Kimi aramak istersiniz\n");
						printf("1) Eski sevgiliniz	2)Kankaniz	3)Anneniz	4)Bakkal Semistan Efenfi\n");
						scanf("%d",&tel);
							if(tel==1)
								{printf("Kanka ben m diyorum\n");
								}
							else if( tel==2)
								{printf("Zamaninda sana soyledigim gibi Cevap:n\n");
								}
							else if(tel==3){
								printf("Yavrum benim uzme kendini cevap:m \n");
								}
							else{
								printf("Benim hic bir fikrim yok\n") ;
								}
			printf("simdi cevabinizi giriniz\n");
		scanf(" %c", &cevap2);
			switch(cevap2)
				{
					case 'h': no(); break;
					case 'j': no(); break;
					case 'n': no(); break;
					case 'm': yes(); break;
					default:printf("Bos biraktiniz paraniz :%d\n",para);break;
				}
		uyu();	
		printf("Soru3:\n");
		printf("Asagidakilerden hangisi TDK sozlugune girmis bir kelimedir?\n")	;
		printf("O)Blade	P)fopen\nK)Daily study	L)Bilgisayar\n");	
			
		scanf(" %c", &cevap3);
			switch(cevap3)
				{
					case 'k': no(); break;
					case 'p': no(); break;
					case 'l': yes(); break;
					case 'o': no(); break;
					default:printf("Bos biraktiniz paraniz :%d\n",para);break;
				}
		printf("Soru 4:\n");
		printf("Basta Kanada olmak uzere 17. ve 18. yuzyilda bircok Fransiz kolonisinde hangisi para olarak kullanilmistir  ");
			printf("Bu soru icin 2 defa cevaplama hakkiniz vardir\n");
			uyu();
		printf("1)iskambil kagidi	2)Bitki tohumu\n3)Cam boncuk	4)Posta pulu \n");
		
			scanf("%d",&cevap4);
			if(cevap4!=1)
			{printf("Bir daha deneyiniz\n");
			scanf("%d",&cevap5);
				if(cevap5==1){
					yes();
				}
				else if(cevap5!=1 &&cevap5!=2 && cevap5!=3 &&cevap5!=4 )
				{
					printf("Bos biraktiniz paraniz :%d\n",para);
				}
				else{
					no();
				}
			}
			else{yes();}
		printf("soru 5");printf("Hangisi bir ilimizdir?.");
			printf("1)Sincan	2)Artvin	3)New York	4)ic anadolu bolgesi\n");
			scanf("%d",&cevap6);
				if(cevap6==2)
				{yes();
				}
				else if(cevap6!= 1 && cevap6!=2 && cevap6!= 3 && cevap6!= 4)
				printf("Bos biraktiniz paraniz :%d\n",para);
				else{no();
				}
		if(para<0){printf("Malesef bize %d TL borcunuz bulunmaktadir. En yakin zamanda odeyiniz!",para);

		}
		else if(para>0){
		printf("Guzel oyundu paraniz %d TL, en yakin bankaddan cekebilirsiniz",para);}
		else
		{
			printf("Uzgunum hic para kazanamadiniz. Bir dahaki sefere");
		}
		}
else{

printf("Elveda");}	
return 0;
}
