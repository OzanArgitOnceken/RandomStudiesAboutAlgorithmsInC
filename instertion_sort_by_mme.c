#include<stdio.h>
#include<stdlib.h>

int main()
{
	int str[]={123,1,777,999,3,5,6,90,23,76};//9 eleman
	int i, key, j; 
    for (i = 1; i < 9; i++) { 
        key = str[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && str[j] > key) { 
            str[j + 1] = str[j]; 
            j = j - 1; 
        } 
        str[j + 1] = key; 
    } 
	for(i=0;i<9;i++)
	{
		pr("%d	,",str[i]);
	}
}

