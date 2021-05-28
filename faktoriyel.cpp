#include<conio.h>
#include<stdio.h>
int main()
int faktoriyel(int n)
{	

    if(n == 0)
        return 1;
    
    return n*faktoriyel(n-1);


}
