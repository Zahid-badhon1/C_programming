#include <stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1");
    }
    else
    {

        for (i = 0; i <= n; i++)
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
    }
        return 0;
    }