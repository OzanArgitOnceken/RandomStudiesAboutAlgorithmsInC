#include<stdio.h>
int main()
{double ara,final;
double son;
printf("Ara sinav ve donem sonu sinavi notunuz:");
scanf("%lf",&ara);
scanf("%lf",&final);
son=((ara*40)/100)+((final*60)/100);
if(son>=54.5)
{printf("ortalamaniz %.1lf\n",son);
printf("Gectiniz");
}
else
{printf("Ortalamaniz %.1lf\n",son);
printf("Kaldiniz");

}
return 0;
}
