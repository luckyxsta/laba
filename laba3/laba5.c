#include <stdio.h>
int main(){
	int s,n,a;
for ( s=0,n=2,a=5; n<a; n++){
      if (a%n==0) s++;
	}
	if (s==0) puts("1");
	else puts("0");
}
