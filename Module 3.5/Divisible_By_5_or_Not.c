#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 5 == 0)
        {
            printf("%dYes\n", i);
        }
        else
        {
            printf("%dNo\n", i);
        }
    }
    return 0;
}