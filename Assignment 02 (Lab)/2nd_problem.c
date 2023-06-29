#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum;
    if (n < 0)
    {
        for (int i = n; i <= 1; i++)
        {
            //  sum=sum+1;
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
            printf("%d ", i);
    }

    return 0;
}
