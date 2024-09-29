#include <stdio.h>

int main(){
	int s,i,n;
	for (s=1,n=5, i=1; i<=n; i++) 
	{
	s*=i;
	}
	printf("%d",s);
}
