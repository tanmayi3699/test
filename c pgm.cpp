#include<stdio.h>
unsigned int fun(unsigned int n, unsigned int r)
{
	if(n>0)
	return (n%r + fun(n/r, r));
	else return 0;
}
int main ()
{
	printf("%d", fun(513, 2));
	return 0;
}


