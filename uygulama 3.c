#include<stdio.h>
int main()
{
int a;
FILE*dosya = fopen("notlars.txt","r");
fscanf(dosya,"%d",&a);
printf("Dogum tarihiniz %d olarak dosyadan okundu",a);
printf("\nYasiniz:%d",2019-a);
return 0;
}
