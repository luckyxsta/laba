#include "stdio.h"

int main()
{
    int k;
    int a;
    printf("ВВЕДИТЕ ЧИСЛО И СДВИГ: ");
    scanf("%d %d", &a, &k);
    int res = (a << k) | (1<<k)-1;
    printf("%d", res);

}