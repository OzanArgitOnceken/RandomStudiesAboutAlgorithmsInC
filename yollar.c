#include <stdio.h> #include <string.h> int sozcuktenIndise(char ilismi[]); // ankara dersin 0 doner, bolu dersin 1 doner... int km_hesapla(char ilIsmi[5][50], int yol[5][5]); // il dizilimine bakar, yol uzunluðunu verir. void degistir(char dizgi1[], char dizgi2[]); // iki int'in yerini kendi içinde deðiþtirir. int main() {  char ilIsmi[5][50];  int yol[5][5]= // DGKKAT! ankara 0, bolu 1, kars 2, mus 3, van ise 4 indisiyle anilacaktir.  {   {0,  191,  1075,   976,   1194},   {0,  0,  1166,   1157,   1375},   {0,  0,  0,   350,   365},   {0,  0,  0,   0,   218},   {0,  0,  0,   0,   0}  };  int i,j;  //tablonun geriye kalan kismini doldurur. A-B illeri arasi uzaklik ile B-A illeri arasi uzaklik aynidir.  for(i=0; i<5; i++)  {   for(j=0; j<i; j++)    yol[i][j]=yol[j][i];  }    int km=0;  printf("Sevkiyatin cikis ili:");  scanf("%s", ilIsmi[0]);  strcpy(ilIsmi[4],ilIsmi[0]); //baslangic ve cikis illeri ayni olacak.  printf("Sevkiyatin hedefi:");  for(i=1; i<=3 ; i++)  {   scanf("%s", ilIsmi[i]);  } 
 
 printf("\n"); 
 
 int min = km_hesapla(ilIsmi,yol); //ilk basta rota1'i min varsayalim.  int minRotaNo =1;  int k;  for(j=1; j<=6; j++)  {   printf("Rota %d:",j);   for(i=0; i<5; i++)   {    printf("%s", ilIsmi[i]);    if(i!=5-1) //ekran suslemesi ankara - van - 'lerdeki - 'leri koyar.     printf("-");    else     printf("\n");   }      km = km_hesapla(ilIsmi,yol); //mevcut il diziliminin uzunlugunu verir.   printf("Uzunluk: %d km\n", km); 
 
  if(km<min) // il dizilimleri arasindaki minimum uzunlugu olani tespit icin   {    min=km;    minRotaNo= j;   } 
 
  if(j%2==1) // permutasyon icin - farkli rota dizilimi uretir.   {    degistir(ilIsmi[2],ilIsmi[3]);   }   else   {    degistir(ilIsmi[1],ilIsmi[2]);   }  }   
8 
 
 printf("\nCevre ve butce dostu olan Rota %d ya da Rota %d oneriliyor.\n", minRotaNo, minRotaNo+3);  printf("- Tirin ortalama mazot sarfiyati %.0lf lt olacaktir.\n", km*0.40);  printf("- Ortalama mazot maliyeti %.0lf TL olacaktir.\n", km*0.40*6.40); 
 
 return 0; } 
 
int sozcuktenIndise(char ilismi[]) {  char iller[5][50]= {"ankara", "bolu", "kars", "mus", "van"};  int i;  for(i=0; i<5; i++)  {   if(!strcmp(iller[i], ilismi))    return i;  }  return -1; } 
 
int km_hesapla(char ilIsmi[5][50], int yol[5][5]) {  int il[5];  int i;  for(i=0; i<5 ; i++) //butun il sozcukleri, il indislerine cevrildi. ankara 0 oldu, bolu 1 oldu...   il[i] = sozcuktenIndise(ilIsmi[i]);  int km=0;  for(i=0; i<5-1; i++) // içeride i+1 geçtiði için -1 geliyor. Böylece i+1 maksimum 4 deðerini alýr.  {   km += yol[ il[i] ][ il[i+1] ];  }  return km; } 
 
void degistir(char dizgi1[], char dizgi2[]) {  char temp[50];  strcpy(temp, dizgi1);  strcpy(dizgi1, dizgi2);  strcpy(dizgi2, temp); } 
