#include <stdio.h>
#include <string.h>
int main()
{
char x[20];
char a[20];
gets(x);
strrev(x);
char a[strrev(x)];
printf("%s\n",x);
if(strcmp(x,a)==0)
{

printf("palindorme");
}
else{

printf("olmadi yar");
}
}

