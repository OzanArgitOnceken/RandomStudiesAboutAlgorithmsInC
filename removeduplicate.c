#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include"ozycript.h"
char* remove_duplicates(char* str);
int main()
{
	char c[100];
	sc("%[^\n]s",c);remove_duplicates(c);
	pr("%s",c);
}
char* remove_duplicates (char* str)
{
	if(*str==*(str+1))
	{
		strcpy((str+1),(str+2));
		if(*str=='\0')
			return 0;
		remove_duplicates(str);
	}
	str++;
	if(*str=='\0')
		return 0;
	remove_duplicates(str);
		return str;
}
