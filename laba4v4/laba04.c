#include "stdio.h"

int main()
{
    int n;
    printf("Введите значение n: ");
    scanf("%d",&n);
    int cnt = 1;
    for (int i = 0; i<n; i++)
        {
            for(int x = 0; x<n; x++)
                {
                    printf("%d ",cnt);
                    cnt++;
                }
            printf("\n");
        } 

    return 0;
}