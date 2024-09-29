#include <stdio.h>

int main()
{
	int n,a;
	for(n=2, a=17; n<a && a%n!=0; n++);
		{
		if (n==a) puts("1");
		else puts("0");
		}
}
