#include <stdio.h>
void x(int dizi[], int n);
int main()
{
	int a[800];
	int i,s,sayi;
	printf("Sinir?");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	x(a,s);
	for(i=0; i<s; i++)
	printf("%d ", a[i]);
return 0;
}

void x(int dizi[], int n)
{
    int i, temp;
    int degistiMi;
    do{
        degistiMi = 1;
        for(i=0; i<=n - 2; i++){
            if(dizi[i] > dizi[i+1]){
                temp = dizi[i];
                dizi[i] = dizi[i+1];
                dizi[i+1] = temp;
                degistiMi = 0;
            }
        }
        n--;
    }while(!degistiMi);
}


