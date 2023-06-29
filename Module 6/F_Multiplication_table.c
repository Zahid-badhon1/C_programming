#include <stdio.h>
int main()
{
    int n, i;
    int x = 12;
    scanf("%d", &n);
    for (i = 1; i <= 12; i++)
    {
        int multi = n * i;
        printf("%d * %d = %d\n", n, i, multi);
    }

    return 0;
}