
#include <stdio.h>
int main()
{
	char isim[20], ulke_ismi[40];
	scanf("%[^\n]s", isim);
	printf("Isme <%s> kaydedildi.\n", isim);
	scanf("%[^\n]s", ulke_ismi); 
	printf("Ulkeye <%s> kaydedildi.", ulke_ismi);
	return 0;
}
